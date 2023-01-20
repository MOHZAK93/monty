#include "monty.h"

/**
 * get_op - check op against operations code
 *
 * @op: op to check
 * @stack: double pointer to the start of the stack
 * @line_num: script line number
 *
 * Return: nothing
 */

void get_op(char *op, stack_t **stack, unsigned int line_num)
{
	size_t i;

	instruction_t operator[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL}
	};

	for (i = 0; operator[i].opcode != NULL; i++)
	{
		if (strcmp(operator[i].opcode, op) == 0)
		{
			operator[i].f(stack, line_num);
			return;
		}
	}

	fprintf(stderr,
			"L%u: unknown instruction %s\n",
			line_num, op);
	exit(EXIT_FAILURE);
}
