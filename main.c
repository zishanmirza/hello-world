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

  hello_world("Hello, world!\n");

  int return_value;
  char* text;

  text = start (argv[0]);
  printf ("%s", text);
  free (text);

  printf ("\n");

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
