/*******************************************************************************
 LVGL Port Source File

 Mohit M
 18-APR-2021
 *******************************************************************************/

#include "app_lvgl.h"

/* Application data */
APP_LVGL_DATA app_lvgl;

void APP_LVGL_BacklightEnable(void) {
    TM4301B_BACKLIGHT_Set();
}

void APP_LVGL_BacklightDisable(void) {
    TM4301B_BACKLIGHT_Clear();
}

void APP_LVGL_Initialize(void) {
    /* Place the state machine in its initial state */
    app_lvgl.state = APP_LVGL_STATE_INIT;
}

void APP_LVGL_Tasks(void) {

    /* Check the application's current state */
    switch (app_lvgl.state) {
            /* Application's initial state */
        case APP_LVGL_STATE_INIT:
            /* All done, turn on backlight and Idle */
            printf("LVGL Initialized\r\n");
            APP_LVGL_BacklightEnable();
            app_lvgl.state = APP_LVGL_STATE_IDLE;
            break;

            /* State machine idle state */
        case APP_LVGL_STATE_IDLE:
            break;

            /* The default state should never be executed */
        default:
            break;
    }
}
