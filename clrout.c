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

#include <unistd.h>

#include "clrout.h"

static const char* ansi_color_codes[] = {
   "\033[00m",
   "\033[1m",
   "\033[2m",
   "\033[4m",
   "\033[5m",
   "\033[7m",
   "\033[8m",
   "\033[30m",
   "\033[30m",
   "\033[31m",
   "\033[32m",
   "\033[33m",
   "\033[34m",
   "\033[35m",
   "\033[36m",
   "\033[37m",
   "\033[40m",
   "\033[40m",
   "\033[41m",
   "\033[42m",
   "\033[43m",
   "\033[44m",
   "\033[45m",
   "\033[46m",
   "\033[47m"
};

void set_out_color(FILE* stream, OutColor_t out_color)
{
   if (supports_color(stream)) {
      fputs(ansi_color_codes[out_color], stream);
   }
}



