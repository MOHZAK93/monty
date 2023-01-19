#include "monty.h"

/**
 * add - adds the top two elements of the stack
 *
 * @stack: head of the stack
 * @line_num: line of file being executed
 *
 * Return: nothing
 */

void add(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = *stack;

	if (var.stack_len < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't swap, stack too short\n", line_num);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	(*stack)->n = (*stack)->n + temp->n;
	pop(&temp, line_num);
	return;
	
}
