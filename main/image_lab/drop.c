#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_DROP
#define LV_ATTRIBUTE_IMG_DROP
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_DROP uint8_t drop_map[] = {
  0xfe, 0xfe, 0xfe, 0xff, 	/*Color of index 0*/
  0xdf, 0xdf, 0xdd, 0xff, 	/*Color of index 1*/
  0xd3, 0xd3, 0xd1, 0xff, 	/*Color of index 2*/
  0x8b, 0x8a, 0x86, 0xff, 	/*Color of index 3*/
  0x7b, 0x79, 0x74, 0xff, 	/*Color of index 4*/
  0x6a, 0x68, 0x63, 0xff, 	/*Color of index 5*/
  0x62, 0x60, 0x5b, 0xff, 	/*Color of index 6*/
  0x4d, 0x4b, 0x45, 0xff, 	/*Color of index 7*/
  0xc8, 0xc7, 0xc6, 0xff, 	/*Color of index 8*/
  0xc4, 0xc3, 0xc1, 0xff, 	/*Color of index 9*/
  0xc1, 0xc0, 0xbe, 0xff, 	/*Color of index 10*/
  0xbc, 0xbb, 0xb9, 0xff, 	/*Color of index 11*/
  0x89, 0x87, 0x83, 0xff, 	/*Color of index 12*/
  0x54, 0x51, 0x4c, 0xff, 	/*Color of index 13*/
  0x31, 0x2e, 0x28, 0xff, 	/*Color of index 14*/
  0x2f, 0x2c, 0x25, 0xff, 	/*Color of index 15*/
  0x2c, 0x29, 0x22, 0xff, 	/*Color of index 16*/
  0x28, 0x25, 0x1e, 0xff, 	/*Color of index 17*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 18*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 19*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 20*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 21*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 22*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 23*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 24*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 25*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 26*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 27*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 28*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 29*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 30*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 31*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 32*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 33*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 34*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 35*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 36*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 37*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 38*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 39*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 40*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 41*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 42*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 43*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 44*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 45*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 46*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 47*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 48*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 49*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 50*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 51*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 52*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 53*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 54*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 55*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 56*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 57*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 58*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 59*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 60*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 61*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 62*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 63*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 64*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 65*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 66*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 67*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 68*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 69*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 70*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 71*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 72*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 73*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 74*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 75*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 76*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 77*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 78*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 79*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 80*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 81*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 82*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 83*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 84*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 85*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 86*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 87*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 88*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 89*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 90*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 91*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 92*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 93*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 94*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 95*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 96*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 97*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 98*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 99*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 100*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 101*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 102*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 103*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 104*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 105*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 106*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 107*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 108*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 109*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 110*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 111*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 112*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 113*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 114*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 115*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 116*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 117*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 118*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 119*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 120*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 121*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 122*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 123*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 124*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 125*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 126*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 127*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 128*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 129*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 130*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 131*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 132*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 133*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 134*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 135*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 136*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 137*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 138*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 139*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 140*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 141*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 142*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 143*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 144*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 145*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 146*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 147*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 148*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 149*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 150*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 151*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 152*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 153*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 154*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 155*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 156*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 157*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 158*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 159*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 160*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 161*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 162*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 163*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 164*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 165*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 166*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 167*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 168*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 169*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 170*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 171*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 172*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 173*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 174*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 175*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 176*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 177*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 178*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 179*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 180*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 181*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 182*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 183*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 184*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 185*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 186*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 187*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 188*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 189*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 190*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 191*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 192*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 193*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 194*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 195*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 196*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 197*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 198*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 199*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 200*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 201*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 202*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 203*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 204*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 205*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 206*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 207*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 208*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 209*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 210*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 211*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 212*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 213*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 214*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 215*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 216*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 217*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 218*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 219*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 220*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 221*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 222*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 223*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 224*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 225*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 226*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 227*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 228*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 229*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 230*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 231*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 232*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 233*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 234*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 235*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 236*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 237*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 238*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 239*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 240*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 241*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 242*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 243*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 244*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 245*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 246*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 247*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 248*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 249*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 250*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 251*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 252*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 253*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 254*/
  0x00, 0x00, 0x00, 0x00, 	/*Color of index 255*/

  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x07, 0x0b, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0b, 0x07, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x10, 0x06, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x00, 0x00, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x06, 0x10, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0d, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x02, 0x0d, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0f, 0x09, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0f, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x08, 0x00, 0x00, 0x08, 0x0f, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0e, 0x00, 0x00, 0x0e, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x0c, 0x03, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
  0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
};

const lv_img_dsc_t drop = {
  .header.cf = LV_IMG_CF_INDEXED_8BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 30,
  .header.h = 30,
  .data_size = 1924,
  .data = drop_map,
};
