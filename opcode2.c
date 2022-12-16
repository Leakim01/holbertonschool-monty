#include "monty.h"

int globvar;

/**
 * swap - swap the 2 end stack
 * @stack: linked list
 * @line_number: line number
 * Return: Nothing.
 */

void swap(stack_t **stack, unsigned int line_number)
{
    int tmp = 0;

    if (*stack == NULL || ((*stack)->next) == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
        return;
    }
    tmp = (*stack)->n;
    (*stack)->n = (*stack)->next->n;
    (*stack)->next->n = tmp;
}

/**
 * add - add 2 stack
 * @stack: linked list
 * @line_number: line number
 * Return: Nothing.
 */

void add(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%i: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    (*stack)->next->n = (*stack)->next->n + (*stack)->n;
}

/**
 * nop - nothing
 * @stack: linked list
 * @line_number: line number
 * Return: Nothing.
 */

void nop(stack_t **stack, unsigned int line_number)
{
    (void)*stack;
    (void)line_number;
}
