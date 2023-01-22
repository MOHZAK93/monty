#include "monty.h"

/**
 * _queue - sets the format of the data to a queue (FIFO)
 *
 * @stack: head of the stack
 * @line_num: line of the file being executed
 */
void _queue(stack_t **stack, unsigned int line_num)
{
	(void)stack;
	(void)line_num;
	var.queue = QUEUE;
}
