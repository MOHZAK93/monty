#include "monty.h"

/**
 * _stack - sets the format of the data to a stack (LIFO)
 *
 * @stack: head of the stack
 * @line_num: line of the file being executed
 */
void _stack(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	var.queue = STACK;
}
