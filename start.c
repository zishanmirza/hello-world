#include <stdio.h>
#include <stdlib.h>

#include "start.h"

char*
start (char* text)
{
  char* buffer;

  buffer = malloc (sizeof (char) * 32);
  snprintf (buffer, sizeof (char) * 32, "%s", text);

  return buffer;
}
