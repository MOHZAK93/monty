#include "monty.h"

/**
 * pop - removes value at the top of stack
 *
 * @stack: double pointer to the head of stack
 * @line_num: line being executed
 *
 * Return: nothing
 */

void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *head = *stack;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_num);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;

	if (var.stack_len != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	free(head);
	var.stack_len--;
}
