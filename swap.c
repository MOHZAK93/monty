#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 *
 * @stack: head of the stack
 * @line_num: line of file being executed
 *
 * Return: nothing
 */

void swap(stack_t **stack, unsigned int line_num)
{

	stack_t *temp;

	if (var.stack_len < 2)
	{
		fprintf(stderr,
				"L%u: can't swap, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	if (var.stack_len == 2)
	{
		*stack = (*stack)->next;
		return;
	}
	temp = (*stack)->next;
	temp->prev = (*stack)->prev;
	(*stack)->prev->next = temp;
	(*stack)->prev = temp;
	(*stack)->next = temp->next;
	temp->next->prev = *stack;
	temp->next = *stack;
	*stack = temp;
}
