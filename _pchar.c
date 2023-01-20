#include "monty.h"

/**
 * _pchar - prints the char at the top of stack
 *
 * @stack: double pointer to the head of stack
 * @line_num: line being executed
 */
void _pchar(stack_t **stack, unsigned int line_num)
{
	if (*stack == NULL)
	{
		fprintf(stderr,
				"L%u: can't pchar, stack empty\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr,
				"L%u: can't pchar, value out of range",
				line_num);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%c\n", (*stack)->n);
}
