#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1234
#define PRODUCT_ID      0x5678
#define DEVICE_VER      0x0000
#define MANUFACTURER    8o7wer
#define PRODUCT         30wer
#define DESCRIPTION     Gherkin style construction 30% staggered pcb kit

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 13

/* pcb default pin-out */
#define MATRIX_ROW_PINS { E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6, D1, D0, D4, C6, D7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS
