/**
 * Copyright (c) 2021 Mehdi Nasef
 * 
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would
 *    be appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not
 *    be misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source
 *    distribution.
 */

#pragma once

#include <stdio.h>
#include <stdbool.h>

/**
 * An enum with the colors.
 */
typedef enum colors_enum {
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

/**
 * Sets the output color of a stream if it supports colors.
 * 
 * @param stream The stream whose color to be set.
 * @param out_color The color to set the output to.
 */
void set_out_color(FILE* stream, OutColor_t out_color);

/**
 * Checks if the stream supports output colors.
 * 
 * @param stream The stream to check.
 * 
 * @return true if the stream supports output coloring, false otherwise.
 */
bool supports_color(FILE* stream);

