#include "monty.h"

int globvar;

/**
 *
 */

void atila(char *value)
{
    if (value)
        globvar = atoi(value);
}
