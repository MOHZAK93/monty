#include "monty.h"

/**
 * _mod - computes the rest of the division of the second top element
 *        byte the top element
 *
 * @stack: head of the stack
 * @line_num: line of file being executed
 */
void _mod(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (var.stack_len < 2)
	{
		fprintf(stderr,
				"L%u: can't mod, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr,
				"L%u: division by zero\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	(*stack)->n = (*stack)->n % temp->n;
	_pop(&temp, line_num);
}
