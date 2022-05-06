#include <stdio.h>
#include <stdlib.h>

#include "start.h"

#include "main.h"

int
main (int argc, char** argv)
{
  if (argc != 1)
    return 0;

  char* text;
  text = start (argv[0]);
  fprintf (stdout, "%s\n", text);
  free (text);

  return 0;
}
