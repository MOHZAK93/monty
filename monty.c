#define  _GNU_SOURCE
#include "monty.h"

var_t var;
/**
 * main - Monty bytecode interpreter
 *
 * @ac: number of argements
 * @av: array of argument strings
 *
 * Return: EXIT_SUCCESS on success.
 */

int main(int ac, char **av)
{
	unsigned int line_num = 0;
	stack_t *head = NULL;
	FILE *fs = NULL;
	char *lineptr = NULL, *op = NULL;
	size_t n = 0;

	var.stack_len = 0;
	var.queue = 0;

	if (ac != 2)
	{
		fprintf(stderr,
				"Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	fs = fopen(av[1], "r");
	if (fs == NULL)
	{
		fprintf(stderr,
				"Error: Can't open file %s\n",
				av[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&lineptr, &n, fs) != -1)
	{
		line_num++;
		op = strtok(lineptr, "\n\t\r ");
		if (op != NULL)
		{
			get_op(op, &head, line_num);
		}
	}
	free(lineptr);
	free(op);
	exit(EXIT_SUCCESS);
}
