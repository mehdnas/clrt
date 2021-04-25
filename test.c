#include "clrout.h"

int main(int argc, const char* argv[])
{
   set_out_color(stdout, CLR_RED);
   puts("A red stdout text");
   set_out_color(stderr, CLR_GREEN);
   puts("A green stderr text");
}
