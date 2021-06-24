/**
 * Copyright (c) 2021 Mehdi Nasef
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
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
static inline bool supports_color(FILE* stream)
{
   return isatty(fileno(stream));
}


