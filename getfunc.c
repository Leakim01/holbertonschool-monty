#include "monty.h"

/**
 * get_func - char to function
 * @x: variable to the function
 * Return: function
 */

void getfunc(char *command, stack_t **head, unsigned int line_number)
{
    int i = 0;

    instruction_t arr[] = {
        {"push", push},
        {"pall", pall},
        {"pint", pint},
        {"pop", pop},
        {NULL, NULL}};
    while (arr[i].opcode)
    {
        if (strcmp(arr[i].opcode, command) == 0)
        {
            arr[i].f(head, line_number);
            break;
        }
        i++;
    }
    if (arr[i].opcode == NULL)
        fprintf(stderr, "L%i: unknown instruction %s\n", line_number, command);
    return;
}
