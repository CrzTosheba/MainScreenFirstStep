#include <stdio.h>
#include <string.h>
#include "lvgl.h"
#include "../lib/encoder/encoder.h"
#include "driver/gpio.h"
#include "esp_log.h"
#define CONFIG_RE_GET_PERIOD (10) // ms, Period get key + rot enc state
 LV_FONT_DECLARE(valve);



static const char *TAG = "main";
lv_obj_t * _cont;



static void menu_slide(lv_event_t * e)
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

static void menu_event_cb(lv_obj_t * cont, uint8_t e)
{
    ESP_LOGI(TAG, "encoder_event enc=%x", e);

    if(e & ENC_CLICK)
        ESP_LOGI(TAG, "CLICK  %s", e & ENC_LONG_HOLD ? "LH" : "");
		//menu_click(cont);

    int8_t rot = 0;
    if(e & ENC_LEFT)
        rot = -1;
    else if(e & ENC_RIGHT)
        rot = 1;

    if(rot){
		rot *= -300;
		lv_obj_scroll_by(cont, 0, rot, LV_ANIM_OFF);
         ESP_LOGI(TAG, "IDX  %d", rot);
    }
}

void menu_encoder_event_cb(uint8_t e)
{
    menu_event_cb(_cont, e);
}

/**
 * Translate the object as they scroll
 */

void BUT(void)
{
    // делаем контейнер
    lv_obj_t * cont = lv_obj_create(lv_scr_act()); 
    lv_obj_set_size(cont, 1000, 1000);
    lv_obj_center(cont);
    lv_obj_set_flex_flow(cont, LV_FLEX_FLOW_COLUMN);
    lv_obj_add_event_cb(cont, menu_slide, LV_EVENT_SCROLL, NULL);

    enc_register_event(menu_encoder_event_cb); 
	
	
    lv_obj_set_style_radius(cont, LV_RADIUS_CIRCLE, 0);
    lv_obj_set_style_clip_corner(cont, true, 0);
    lv_obj_set_scroll_dir(cont, LV_DIR_VER);
    lv_obj_set_scroll_snap_y(cont, LV_SCROLL_SNAP_CENTER);
    lv_obj_set_scrollbar_mode(cont, LV_SCROLLBAR_MODE_AUTO);
    lv_obj_set_pos(cont, 660, 0);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x1E2528),0);
   // lv_obj_set_style_border_color(cont, lv_color_hex(0x1E2528),0);
 

      uint32_t i;
      for(i = 0; i < 8; i++) {

          // lv_obj_t * btn = lv_btn_create(cont);
        // lv_obj_set_width(btn, lv_pct(100));
        // lv_obj_t * label = lv_label_create(btn);
        // lv_label_set_text(label, "GVS");
        // lv_obj_set_style_bg_color(btn, lv_palette_main(LV_PALETTE_RED),0);

         lv_obj_t * box = lv_obj_create(cont);
         lv_obj_set_size(box, 250, 80);
         lv_obj_t * img = lv_img_create(box);
         lv_img_set_src(img, &valve);
         lv_obj_align(img, LV_ALIGN_BOTTOM_LEFT, 0, 0);
         lv_obj_t * label = lv_label_create(box);
         lv_label_set_text(label, "      GVS");
         lv_obj_align(label, LV_ALIGN_BOTTOM_LEFT, 0, 0);
         lv_obj_set_style_border_color(box, lv_color_hex(0x000000),0);
         lv_obj_set_style_bg_color(box, lv_color_hex(0x1E2528),0);
         lv_obj_set_style_text_color(label, lv_color_hex(0xffffff), 0);



    
        lv_obj_t * btn1 = lv_btn_create(cont);
        lv_obj_set_width(btn1, lv_pct(100));
        lv_obj_t * label1 = lv_label_create(btn1);
        lv_label_set_text(label1, "HEAT");
            

        lv_obj_t * btn2 = lv_btn_create(cont);
        lv_obj_set_width(btn2, lv_pct(100));
        lv_obj_t * label2 = lv_label_create(btn2);
        lv_label_set_text(label2, "CO");
        lv_obj_set_style_bg_color(btn2, lv_palette_main(LV_PALETTE_RED),0);
             
        
        lv_obj_t * btn3 = lv_btn_create(cont);
        lv_obj_set_width(btn3, lv_pct(100));
        lv_obj_t * label3 = lv_label_create(btn3);
        lv_label_set_text(label3, "PUMPS");
        
        
        lv_obj_t * btn4 = lv_btn_create(cont);
        lv_obj_set_width(btn4, lv_pct(100));
        lv_obj_t * label4 = lv_label_create(btn4);
        lv_label_set_text(label4, "NEW1");


        lv_obj_t * btn5 = lv_btn_create(cont);
        lv_obj_set_width(btn5, lv_pct(100));
        lv_obj_t * label5 = lv_label_create(btn5);
        lv_label_set_text(label5, "Something");


        lv_obj_t * btn6 = lv_btn_create(cont);
        lv_obj_set_width(btn6, lv_pct(100));
        lv_obj_t * label6 = lv_label_create(btn6);
        lv_label_set_text(label6, "Again");

        lv_obj_t * btn7 = lv_btn_create(cont);
        lv_obj_set_width(btn7, lv_pct(100));
        lv_obj_t * label7 = lv_label_create(btn7);
        lv_label_set_text(label7, "qweqwe");

      }

    /*Update the buttons position manually for first*/
    lv_event_send(cont, LV_EVENT_SCROLL, NULL);

    /*Be sure the fist button is in the middle*/
    lv_obj_scroll_to_view(lv_obj_get_child(cont, 1), LV_ANIM_OFF);
    _cont = cont;
    fflush(NULL);
}
