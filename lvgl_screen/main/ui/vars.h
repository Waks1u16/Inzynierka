#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations

// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_TEMPERATURE = 0,
    FLOW_GLOBAL_VARIABLE_PRESSURE = 1,
    FLOW_GLOBAL_VARIABLE_WEATHER = 2
};

// Native global variables

extern const char *get_var_temperature();
extern void set_var_temperature(const char *value);
extern const char *get_var_pressure();
extern void set_var_pressure(const char *value);
extern const char *get_var_weather();
extern void set_var_weather(const char *value);

#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/