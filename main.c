#include <stdio.h>
#include <stdlib.h>

#include "start.h"

#include "main.h"

int
main (int argc, char** argv)
{
    if (argc != 1)
        return 0;

    start(argv[0]);

    return 0;
}
