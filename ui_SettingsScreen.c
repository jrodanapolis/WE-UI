// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.3
// LVGL version: 8.3.6
// Project name: WE_GPC_UnoR4Display

#include "ui.h"

void ui_SettingsScreen_screen_init(void)
{
ui_SettingsScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_SettingsScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_SettingsScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SettingsScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui_SettingsScreen, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label33 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label33, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label33, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label33, 0 );
lv_obj_set_y( ui_Label33, -210 );
lv_obj_set_align( ui_Label33, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label33,"Settings");
lv_obj_set_style_text_font(ui_Label33, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button4 = lv_btn_create(ui_SettingsScreen);
lv_obj_set_width( ui_Button4, 120);
lv_obj_set_height( ui_Button4, 90);
lv_obj_set_x( ui_Button4, -335 );
lv_obj_set_y( ui_Button4, -190 );
lv_obj_set_align( ui_Button4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0x133964), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui_Button4, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Button4, lv_color_hex(0x246FC3), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Button4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Button4, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Button4, lv_color_hex(0x5FE9F4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Button4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_Button4, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_Button4, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label34 = lv_label_create(ui_Button4);
lv_obj_set_width( ui_Label34, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label34, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label34, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label34,"Back");
lv_obj_set_style_text_font(ui_Label34, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Roller3 = lv_roller_create(ui_SettingsScreen);
lv_roller_set_options( ui_Roller3, "7 g\n14 g\n18 g\n21 g", LV_ROLLER_MODE_NORMAL );
lv_obj_set_height( ui_Roller3, 100);
lv_obj_set_width( ui_Roller3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_Roller3, -142 );
lv_obj_set_y( ui_Roller3, 42 );
lv_obj_set_align( ui_Roller3, LV_ALIGN_CENTER );

ui_Label35 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label35, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label35, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label35, -284 );
lv_obj_set_y( ui_Label35, 159 );
lv_obj_set_align( ui_Label35, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label35,"Water");
lv_obj_set_style_text_font(ui_Label35, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label36 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label36, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label36, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label36, 248 );
lv_obj_set_y( ui_Label36, 169 );
lv_obj_set_align( ui_Label36, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label36,"Shot Counter: 420");
lv_obj_set_style_text_color(ui_Label36, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label36, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label36, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label37 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label37, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label37, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label37, 188 );
lv_obj_set_y( ui_Label37, 206 );
lv_obj_set_align( ui_Label37, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label37,"Power On Time: 52:43:07:18");
lv_obj_set_style_text_color(ui_Label37, lv_color_hex(0x808080), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label37, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label37, &lv_font_montserrat_28, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label38 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label38, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label38, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label38, 182 );
lv_obj_set_y( ui_Label38, -115 );
lv_obj_set_align( ui_Label38, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label38,"Lunar");
lv_obj_set_style_text_font(ui_Label38, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label39 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label39, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label39, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label39, -280 );
lv_obj_set_y( ui_Label39, 37 );
lv_obj_set_align( ui_Label39, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label39,"Dose");
lv_obj_set_style_text_font(ui_Label39, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Roller1 = lv_roller_create(ui_SettingsScreen);
lv_roller_set_options( ui_Roller1, "Reservoir\nPlumbed", LV_ROLLER_MODE_NORMAL );
lv_obj_set_height( ui_Roller1, 100);
lv_obj_set_width( ui_Roller1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_Roller1, -143 );
lv_obj_set_y( ui_Roller1, 163 );
lv_obj_set_align( ui_Roller1, LV_ALIGN_CENTER );

ui_Label40 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label40, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label40, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label40, 120 );
lv_obj_set_y( ui_Label40, -68 );
lv_obj_set_align( ui_Label40, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label40,"Connected: Yes");
lv_obj_set_style_text_color(ui_Label40, lv_color_hex(0x818181), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label40, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label40, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label41 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label41, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label41, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label41, 117 );
lv_obj_set_y( ui_Label41, -32 );
lv_obj_set_align( ui_Label41, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label41,"Weight: 42.0 g");
lv_obj_set_style_text_color(ui_Label41, lv_color_hex(0x818181), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label41, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label41, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label42 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label42, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label42, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label42, 107 );
lv_obj_set_y( ui_Label42, 4 );
lv_obj_set_align( ui_Label42, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label42,"Battery: 69%");
lv_obj_set_style_text_color(ui_Label42, lv_color_hex(0x818181), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label42, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label42, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Slider1 = lv_slider_create(ui_SettingsScreen);
lv_slider_set_range(ui_Slider1, 20,100);
lv_obj_set_width( ui_Slider1, 234);
lv_obj_set_height( ui_Slider1, 20);
lv_obj_set_x( ui_Slider1, 189 );
lv_obj_set_y( ui_Slider1, 120 );
lv_obj_set_align( ui_Slider1, LV_ALIGN_CENTER );


ui_Label43 = lv_label_create(ui_SettingsScreen);
lv_obj_set_width( ui_Label43, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label43, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label43, 184 );
lv_obj_set_y( ui_Label43, 70 );
lv_obj_set_align( ui_Label43, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label43,"Brightness");
lv_obj_set_style_text_font(ui_Label43, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button7 = lv_btn_create(ui_SettingsScreen);
lv_obj_set_width( ui_Button7, 100);
lv_obj_set_height( ui_Button7, 94);
lv_obj_set_x( ui_Button7, 283 );
lv_obj_set_y( ui_Button7, -29 );
lv_obj_set_align( ui_Button7, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button7, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0x133964), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Button7, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_Button7, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Button7, lv_color_hex(0x246FC3), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Button7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Button7, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Button7, lv_color_hex(0x5FE9F4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Button7, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_Button7, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_Button7, 3, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label10 = lv_label_create(ui_Button7);
lv_obj_set_width( ui_Label10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label10,"Scan");
lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Roller2 = lv_roller_create(ui_SettingsScreen);
lv_roller_set_options( ui_Roller2, "30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59\n60", LV_ROLLER_MODE_NORMAL );
lv_obj_set_height( ui_Roller2, 100);
lv_obj_set_width( ui_Roller2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_x( ui_Roller2, -142 );
lv_obj_set_y( ui_Roller2, -72 );
lv_obj_set_align( ui_Roller2, LV_ALIGN_CENTER );

ui_Checkbox1 = lv_checkbox_create(ui_SettingsScreen);
lv_checkbox_set_text(ui_Checkbox1,"ABR");
lv_obj_set_width( ui_Checkbox1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Checkbox1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Checkbox1, -306 );
lv_obj_set_y( ui_Checkbox1, -72 );
lv_obj_set_align( ui_Checkbox1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Checkbox1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_font(ui_Checkbox1, &lv_font_montserrat_40, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);

}
