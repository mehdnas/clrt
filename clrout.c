
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

