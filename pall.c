#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top
 *
 * @stack: head of the stack
 * @line_num: line of file being executed
 *
 * Return: nothing
 */

void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *head;
	(void)line_num;

	head = *stack;
	while (head != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", head->n);
		head = head->next;
		if (head == *stack)
			return;
	}
}
