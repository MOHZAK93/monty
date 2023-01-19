#include "monty.h"

/**
 * _add - adds the top two elements of the stack
 *
 * @stack: head of the stack
 * @line_num: line of file being executed
 *
 * Return: nothing
 */

void _add(stack_t **stack, unsigned int line_num)
{
	int sum = 0;

	if (var.stack_len < 2)
	{
		fprintf(stderr,
				"L%u: can't swap, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	sum += (*stack)->n;
	_pop(stack, line_num);
	(*stack)->n += sum;
}
