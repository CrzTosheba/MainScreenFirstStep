#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_heap_caps.h"
#include "esp_system.h"
#include "lvgl.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_port_fs.h"
#include "lv_pic_scheme/Main_Screen.h"
#include <stdio.h>
#include "driver/gpio.h"
#include "bsp_board.h"
#include "./lib/encoder/encoder.h"





//#define CONFIG_RE_GET_PERIOD (10) // ms, Period get key + rot enc state
//#define CONFIG_LOG_MAXIMUM_LEVEL (3)


static const char *TAG = "main";

static void rotary_encoder_gpio_init(void)
{
   // ESP_LOGI(TAG, "Example configured to rotary encoder GPIO!");
    gpio_reset_pin(GPIO_ROT_ENC_SW); 
    gpio_reset_pin(GPIO_ROT_ENC_A);
    gpio_reset_pin(GPIO_ROT_ENC_B);

    /* Set the GPIO as a push/pull output */
    gpio_set_direction(GPIO_ROT_ENC_SW, GPIO_MODE_INPUT);
    gpio_set_direction(GPIO_ROT_ENC_A, GPIO_MODE_INPUT);
    gpio_set_direction(GPIO_ROT_ENC_B, GPIO_MODE_INPUT);
}





static void scroll_event_cb(lv_event_t * e)
{
    
    lv_obj_t * cont = lv_event_get_target(e);
    

    lv_area_t cont_a;
    lv_obj_get_coords(cont, &cont_a);
    lv_coord_t cont_y_center = cont_a.y1 + lv_area_get_height(&cont_a) / 2;

    lv_coord_t r = lv_obj_get_height(cont) * 7 / 10;
    uint32_t i;
    uint32_t child_cnt = lv_obj_get_child_cnt(cont);
    for(i = 0; i < child_cnt; i++) {
        lv_obj_t * child = lv_obj_get_child(cont, i);
        lv_area_t child_a;
        lv_obj_get_coords(child, &child_a);

        lv_coord_t child_y_center = child_a.y1 + lv_area_get_height(&child_a) / 2;

        lv_coord_t diff_y = child_y_center - cont_y_center;
        diff_y = LV_ABS(diff_y);

        /*Get the x of diff_y on a circle.*/
        lv_coord_t x;
        /*If diff_y is out of the circle use the last point of the circle (the radius)*/
        if(diff_y >= r) {
            x = r;
        } else {
            /*Use Pythagoras theorem to get x from radius and y*/
            uint32_t x_sqr = r * r - diff_y * diff_y;
            lv_sqrt_res_t res;
            lv_sqrt(x_sqr, &res, 0x8000);   /*Use lvgl's built in sqrt root function*/
            x = r - res.i;
        }

        /*Translate the item by the calculated X coordinate*/
        lv_obj_set_style_translate_x(child, x, 0);

        /*Use some opacity with larger translations*/
        lv_opa_t opa = lv_map(x, 0, r, LV_OPA_TRANSP, LV_OPA_COVER);
        lv_obj_set_style_opa(child, LV_OPA_COVER - opa, 0);

    }
}

/**
 * Translate the object as they scroll
 */
void lv_example_scroll_6(void)
{
    lv_obj_t * cont = lv_obj_create(lv_scr_act()); //указатель на экран
    lv_obj_set_size(cont, 1000, 1000);
    lv_obj_center(cont);
    lv_obj_set_flex_flow(cont, LV_FLEX_FLOW_COLUMN);
    lv_obj_add_event_cb(cont, scroll_event_cb, LV_EVENT_SCROLL, NULL);
    lv_obj_set_style_radius(cont, LV_RADIUS_CIRCLE, 0);
    lv_obj_set_style_clip_corner(cont, true, 0);
    lv_obj_set_scroll_dir(cont, LV_DIR_VER);
    lv_obj_set_scroll_snap_y(cont, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_scrollbar_mode(cont, LV_SCROLLBAR_MODE_AUTO);
    lv_obj_set_pos(cont, 640, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x1E2528),0);

    uint32_t i;
    for(i = 0; i < 20; i++) {
        lv_obj_t * btn = lv_btn_create(cont);
        lv_obj_set_width(btn, lv_pct(100));

        lv_obj_t * label = lv_label_create(btn);
        lv_label_set_text_fmt(label, "Button %"LV_PRIu32, i);
    }

    /*Update the buttons position manually for first*/
    lv_event_send(cont, LV_EVENT_SCROLL, NULL);

    /*Be sure the fist button is in the middle*/
    lv_obj_scroll_to_view(lv_obj_get_child(cont, 3), LV_ANIM_OFF);
}







static void lv_tick_task(void *arg)
{

    while(1) 
    {
        vTaskDelay((10) / portTICK_PERIOD_MS);
        lv_task_handler();        
    }
}




void app_main()
{
    /* LVGL init */
    lv_init();            
    lv_port_disp_init();
    lv_port_tick_init();
    rotary_encoder_gpio_init();
    main_screen();
    lv_example_scroll_6();

    


    xTaskCreate(lv_tick_task, "lv_tick_task", 4096, NULL, 1, NULL);
   // xTaskCreate(lv_example_chart_2, "lv_example_chart_2", 4096, NULL, 2, NULL);
   
    

}
