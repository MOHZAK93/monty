#include "monty.h"

/**
 * _sub - subtracts the top element from the second top element
 *
 * @stack: head of the stack
 * @line_num: line of file being executed
 */
void _sub(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (var.stack_len < 2)
	{
		fprintf(stderr,
				"L%u: can't sub, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	(*stack)->n = (*stack)->n - temp->n;
	_pop(&temp, line_num);
}
