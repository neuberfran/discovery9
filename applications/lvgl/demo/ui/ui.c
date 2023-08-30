// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: SquareLine_Project7

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_rodarpdireita;
lv_obj_t * ui_run01toright;
lv_obj_t * ui_stop;
lv_obj_t * ui_stop01;
lv_obj_t * ui_rodarpesquerda;
lv_obj_t * ui_run01toleft;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_rodarpdireita(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        run01right(e);
    }
}
static void ui_event_stop(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        stop01motor(e);
    }
}
static void ui_event_rodarpesquerda(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        run01left(e);
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

    lv_obj_set_width(ui_rodarpdireita, 154);
    lv_obj_set_height(ui_rodarpdireita, 82);

    lv_obj_set_x(ui_rodarpdireita, -130);
    lv_obj_set_y(ui_rodarpdireita, -62);

    lv_obj_set_align(ui_rodarpdireita, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_rodarpdireita, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_rodarpdireita, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_rodarpdireita, ui_event_rodarpdireita, LV_EVENT_ALL, NULL);

    // ui_run01toright

    ui_run01toright = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_run01toright, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_run01toright, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_run01toright, -133);
    lv_obj_set_y(ui_run01toright, -64);

    lv_obj_set_align(ui_run01toright, LV_ALIGN_CENTER);

    lv_label_set_text(ui_run01toright, "Rodar p/ Direita");

    // ui_stop

    ui_stop = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_stop, 100);
    lv_obj_set_height(ui_stop, 70);

    lv_obj_set_x(ui_stop, -9);
    lv_obj_set_y(ui_stop, 32);

    lv_obj_set_align(ui_stop, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_stop, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_stop, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_stop, ui_event_stop, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_stop, lv_color_hex(0xFF3446), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_stop, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_stop01

    ui_stop01 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_stop01, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_stop01, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_stop01, -11);
    lv_obj_set_y(ui_stop01, 31);

    lv_obj_set_align(ui_stop01, LV_ALIGN_CENTER);

    lv_label_set_text(ui_stop01, "PARAR");

    lv_obj_set_style_text_color(ui_stop01, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_stop01, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_rodarpesquerda

    ui_rodarpesquerda = lv_btn_create(ui_Screen1);

    lv_obj_set_width(ui_rodarpesquerda, 155);
    lv_obj_set_height(ui_rodarpesquerda, 78);

    lv_obj_set_x(ui_rodarpesquerda, 105);
    lv_obj_set_y(ui_rodarpesquerda, -64);

    lv_obj_set_align(ui_rodarpesquerda, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_rodarpesquerda, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_rodarpesquerda, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_rodarpesquerda, ui_event_rodarpesquerda, LV_EVENT_ALL, NULL);

    // ui_run01toleft

    ui_run01toleft = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_run01toleft, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_run01toleft, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_run01toleft, 106);
    lv_obj_set_y(ui_run01toleft, -65);

    lv_obj_set_align(ui_run01toleft, LV_ALIGN_CENTER);

    lv_label_set_text(ui_run01toleft, "Rodar p/ Esquerda");

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

