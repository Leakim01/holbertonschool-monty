#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{

}

int main(int argc, char **argv)
{
    printf("%s\n", argv[1]);
    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    char *command;
    char *value;

    fp = fopen(argv[1], "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while ((getline(&line, &len, fp)) != -1) {
        command = strtok(line, " \t");
        printf("%s\n", command);
        value = strtok(NULL, " \t");
        if(value)
        ;
            // push(?????);
        //     printf("%s\n", line);
    }

    exit(EXIT_SUCCESS);
}