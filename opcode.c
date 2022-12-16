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
		free(stack);
		printf("Error\n");
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
 * @stack: linked list
 * @line_number: line number
 * Return: void.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode = NULL;
	(void)line_number;

	if (*stack == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
		return;
	}
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
	free(newnode);
}

/**
 * pint - print int in top of stack
 * @stack: linked list
 * @line_number: line number
 * Return: void.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
		return;
	}
	fprintf(stdout, "%i\n", (*stack)->n);
}

/**
 * pop - removes first element of stack
 * @stack: linked list
 * @line_number: line number
 * Return: void.
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		tmp = (*stack);
		(*stack)->prev = NULL;
	}
	*stack = (*stack)->next;
	free(tmp);
}
