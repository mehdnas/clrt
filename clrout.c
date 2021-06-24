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

#include <unistd.h>

#include "clrout.h"

const char* ansi_color_codes[] = {
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

bool supports_color(FILE* stream)
{
   return isatty(fileno(stream));
}

void set_out_color(FILE* stream, OutColor_t out_color)
{
   if (supports_color(stream)) {
      fputs(ansi_color_codes[out_color], stream);
   }
}

