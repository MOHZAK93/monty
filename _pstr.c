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
	head = *stack;
	while (head != NULL)
	{
		if (head->n == 0 || head->n < 0 || head->n > 127)
			break;
		printf("%c", head->n);
		head = head->next;
		if (head == *stack)
			break;
	}
	printf("\n");
}
