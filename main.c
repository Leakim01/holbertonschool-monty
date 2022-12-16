#include "monty.h"

int globvar;

/**
 *
 */

int main(int argc, char **argv)
{
    stack_t *head = NULL;
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    char *command;
    char *value;
    int line_number = 1;
    (void)argc;

    fp = fopen(argv[1], "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
    while ((getline(&line, &len, fp)) != -1)
    {
        command = strtok(line, " \t\n");
        if (command != NULL)
        {
            value = strtok(NULL, " \t\n");
            atila(value);
            getfunc(command, &head, line_number);
            line_number++;
        }
    }
}
