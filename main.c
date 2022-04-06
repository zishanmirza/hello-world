#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char** argv)
{
    if (argc != 1)
        exit (1);

    char* name;

    name = argv[0];

    fprintf (stdout, "%s Hello, world!\n", name);

    return EXIT_SUCCESS;
}
