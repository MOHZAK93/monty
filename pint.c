#include "monty.h"

/**
 * pint - prints the value at the top of stack
 *
 * @stack: double pointer to the head of stack
 * @line_num: line being executed
 *
 * Return: nothing
 */

void pint(stack_t **stack, unsigned int line_num)
{
	stack_t *head;

	head = *stack;

	if (head == NULL)
	{
		fprintf(stderr,
				"L%u: can't pint, stack empty\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	else
	{
		fprintf(stderr, "%d\n", head->n);
	}
}