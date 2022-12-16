#include "monty.h"

 int globvar;

/**
 * push - adding element to stack
 * @stack: linked list
 * @line_number: line number
 * Return: Nothing.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	(void)line_number;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
		free(stack);
		exit(EXIT_FAILURE);
		return;
	}
	node->n = globvar;
	node->prev = NULL;
	node->next = *stack;
	if (*stack != NULL)
	{
		(*stack)->prev = node;
		node->next = *stack;
	}
	*stack = node;
}

/**
 * pall - print from the start node
 * @stack: the header
 * @line_number: for the error
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;
	(void)line_number;

	if (*stack == NULL)
		return;
	newnode = *stack;
	while (newnode != NULL)
	{
		printf("%i\n", newnode->n);
		if (newnode->next != NULL)
		{
			newnode = newnode->next;
		}
		else
			return;
	}
}
