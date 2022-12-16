#include "monty.h"

int globvar;

/**
 *
 */

void atila(char *value, int line_number)
{
    int test;

    if (value)
        test = _isdigit(value);
    if (test == 1 && value != NULL)
        globvar = atoi(value);
    else
    {
        fprintf(stderr, "L%i: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }
}
