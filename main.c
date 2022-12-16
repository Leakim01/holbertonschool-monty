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

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((getline(&line, &len, fp)) != -1)
    {
        command = strtok(line, " \t\n");
        if (command != NULL)
        {
            if (strcmp(command, "push") == 0)
            {
                value = strtok(NULL, " \t\n");
                if (value != NULL)
                    atila(value, line_number);
            }
            getfunc(command, &head, line_number);
            line_number++;
        }
    }
    fclose(fp);
}
