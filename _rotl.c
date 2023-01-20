#include "monty.h"

/**
 * _rotl - prints the string starting at the top of the stack
 *
 * @stack: double pointer to the head of stack
 * @line_num: line being executed
 */
void _rotl(stack_t **stack, unsigned int line_num)
{
	(void)line_num;
	(*stack) = (*stack)->next;
}
