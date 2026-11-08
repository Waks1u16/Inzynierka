#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

// Screens

enum ScreensEnum {
    _SCREEN_ID_FIRST = 1,
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_MENU_PAGE = 2,
    _SCREEN_ID_LAST = 2
};

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *menu_page;
    lv_obj_t *wallpaper;
    lv_obj_t *cont_clock;
    lv_obj_t *clock;
    lv_obj_t *date;
    lv_obj_t *temperatura;
    lv_obj_t *pogoda;
    lv_obj_t *cisnienie;
    lv_obj_t *obj0;
    lv_obj_t *obj1;
    lv_obj_t *obj2;
    lv_obj_t *background_photo;
} objects_t;

extern objects_t objects;

void create_screen_main();
void tick_screen_main();

void create_screen_menu_page();
void tick_screen_menu_page();

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/