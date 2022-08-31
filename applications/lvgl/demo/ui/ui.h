// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project7

#ifndef _SQUARELINE_PROJECT7_UI_H
#define _SQUARELINE_PROJECT7_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_rodarpdireita;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_stop;
extern lv_obj_t * ui_Label2;

void run01right(lv_event_t * e, lv_obj_t * obj);
void stop01motor(lv_event_t * e, lv_obj_t * obj);





void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
