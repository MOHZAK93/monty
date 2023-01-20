#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 *
 * @stack: double pointer to the head of stack
 * @line_num: line being executed
 */
void _pstr(stack_t **stack, unsigned int line_num)
{
	stack_t *head = *stack;

	(void)line_num;
	if (var.stack_len == 0)
	{
		printf("\n");
		return;
	}
	while (1)
	{
		if (!head || head->n <= 0 || head->n > 127)
		{
			printf("\n");
			return;
		}
		printf("%c", head->n);
		head = head->next;
	}
}
