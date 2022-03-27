#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char** argv)
{
    if (argc != 1)
    {
        exit (1);
    }

    fprintf (stdout, "Hello, world!\n");

    return 0;
}
