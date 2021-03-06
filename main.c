#include <stdio.h>
#include <stdlib.h>

#include "start.h"

#include "main.h"

extern void hello_world(char*);

int
main (int argc, char** argv)
{
  if (argc != 1)
    return 0;

  int return_value;
  char* text;

  hello_world("Hello, World!");

  text = start (argv[0]);
  printf ("%s\n", text);
  free (text);

  __asm__(".intel_syntax;"
          "mov %0,0x1;"
          "add %0,0x1;"
          "sub %0,0x1;"
          "mul %0;"
          "div %0;"
          ".att_syntax;"
          : "=r"(return_value));

  return return_value;
}
