#pragma once

#include <stdio.h>
#include <stdbool.h>

typedef enum TM_COLORS {
   CLR_RESET,
   CLR_BOLD,
   CLR_DARK,
   CLR_UNDERLINE,
   CLR_BLINK,
   CLR_REVERSE,
   CLR_CONCEALED,
   CLR_GRAY,
   CLR_GREY,
   CLR_RED,
   CLR_GREEN,
   CLR_YELLOW,
   CLR_BLUE,
   CLR_MAGENTA,
   CLR_CYAN,
   CLR_WHITE,
   CLR_BG_GRAY,
   CLR_BG_GREY,
   CLR_BG_RED,
   CLR_BG_GREEN,
   CLR_BG_YELLOW,
   CLR_BG_BLUE,
   CLR_BG_MAGENTA,
   CLR_BG_CYAN,
   CLR_BG_WHITE
} OutColor_t;

void set_out_color(FILE* stream, OutColor_t out_color);

bool supports_color(FILE* stream);

