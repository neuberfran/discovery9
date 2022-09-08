// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project7

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_rodarpdireita;
lv_obj_t * ui_Label1;
lv_obj_t * ui_stop;
lv_obj_t * ui_Label2;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_rodarpdireita(lv_event_t * e, lv_obj_t * obj)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        run01right(e);
    }
}
static void ui_event_stop(lv_event_t * e, lv_obj_t * obj)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        stop01motor(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_rodarpdireita

    ui_rodarpdireita = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_rodarpdireita, 125);
    lv_obj_set_height(ui_rodarpdireita, 50);

    lv_obj_set_x(ui_rodarpdireita, 8);
    lv_obj_set_y(ui_rodarpdireita, -47);

    lv_obj_set_align(ui_rodarpdireita, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_rodarpdireita, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_rodarpdireita, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_rodarpdireita, ui_event_rodarpdireita, LV_EVENT_ALL, NULL);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 3);
    lv_obj_set_y(ui_Label1, -47);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "run01 to right");

    // ui_stop

    ui_stop = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_stop, 100);
    lv_obj_set_height(ui_stop, 50);

    lv_obj_set_x(ui_stop, 7);
    lv_obj_set_y(ui_stop, 53);

    lv_obj_set_align(ui_stop, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_stop, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_stop, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_stop, ui_event_stop, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_stop, lv_color_hex(0xFF3446), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_stop, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, 4);
    lv_obj_set_y(ui_Label2, 52);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "STOP");

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

