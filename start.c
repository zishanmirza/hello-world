#include <stdio.h>
#include <stdlib.h>

#include "start.h"

char*
start (char* name)
{
  char* text;

  text = malloc (sizeof (char) * BUFFER);
  snprintf (text, BUFFER, "Application: %s: Hello, world!", name);

  return text;
}
