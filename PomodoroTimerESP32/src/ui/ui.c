// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.0
// LVGL VERSION: 8.2
// PROJECT: LVGL_demo

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Screen1;
lv_obj_t * ui_Spinner1;
lv_obj_t * ui_Label1;

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen1, ui_event_Screen1, LV_EVENT_ALL, NULL);

    // Spinner1

    ui_Spinner1 = lv_spinner_create(ui_Screen1, 1000, 90);

    lv_obj_set_width(ui_Spinner1, 80);
    lv_obj_set_height(ui_Spinner1, 80);

    lv_obj_set_x(ui_Spinner1, 0);
    lv_obj_set_y(ui_Spinner1, 0);

    lv_obj_set_align(ui_Spinner1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Spinner1, LV_OBJ_FLAG_CLICKABLE);

    lv_obj_set_style_arc_color(ui_Spinner1, lv_color_hex(0x4040FF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // Label1

    ui_Label1 = lv_label_create(ui_Screen1);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 0);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "Text");

    lv_obj_clear_flag(ui_Label1, LV_OBJ_FLAG_CLICKABLE);

}

void ui_init(void)
{
    ui_Screen1_screen_init();
    lv_disp_load_scr(ui_Screen1);
}

