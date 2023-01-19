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
	stack_t *temp = *stack;

	if (var.stack_len < 2)
	{
		fprintf(stderr,
				"L%u: can't swap, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	sum = (*stack)->n + temp->n;
	(*stack)->n = sum;
	_pop(&temp, line_num);
	var.stack_len--;
}
