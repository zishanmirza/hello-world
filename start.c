#include <stdio.h>
#include <stdlib.h>

#include "start.h"

char*
start (char* name)
{
  char* text;

  text = malloc (sizeof (char) * BUFFER);
  snprintf (text, BUFFER, "%s: Hello, world!", name);

  return text;
}
