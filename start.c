#include <stdio.h>
#include <stdlib.h>

char*
start (char* name)
{
    char* text;

    text = malloc (sizeof (char) * 1024);
    snprintf (text, 1024, "%s: Hello, world!", name);

    return text;
}
