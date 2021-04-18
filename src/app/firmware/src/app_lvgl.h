/*******************************************************************************
 LVGL Port Header File

 Mohit M
 18-APR-2021
 *******************************************************************************/

#ifndef _APP_LVGL_H
#define _APP_LVGL_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "configuration.h"
#include "definitions.h"

/* Application state data type */
typedef enum {
    /* Application state machine's initial state */
    APP_LVGL_STATE_INIT = 0,

    /* State machine idle state */
    APP_LVGL_STATE_IDLE,

} APP_LVGL_STATES;

/* Application variable data type */
typedef struct {
    /* The application's current state */
    APP_LVGL_STATES state;

} APP_LVGL_DATA;

void APP_LVGL_BacklightEnable(void);
void APP_LVGL_BacklightDisable(void);
void APP_LVGL_Initialize(void);
void APP_LVGL_Tasks(void);

#endif /* _APP_LVGL_H */
