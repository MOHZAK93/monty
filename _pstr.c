#include "monty.h"
#include <ctype.h>

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
	while (1)
	{
		if ((*stack)->n == 0 || (*stack)->n < 0 || (*stack)->n > 127)
		{
			break;
		}
		printf("%c", (*stack)->n);
		*stack = (*stack)->next;
		if (head == *stack)
			break;
	}
	printf("\n");
}
