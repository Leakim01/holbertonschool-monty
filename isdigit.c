#include "monty.h"

int globvar;

/**
 * _isdigit - Entry point
 * @value: character
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(char *value)
{
	int i = 0;

	for (i = 0; value[i]; i++)
	{
		if (!(value[0] == '-' || (value[i] >= 48 && value[i] <= 57)))
		{
			return (0);
		}
	}
	return (1);
}
