#include "monty.h"


void pall(stack_t **stack, unsigned int line_num)
{
	stack_t *head;
	(void)(line_num);

	head = *stack;

	while (head != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", head->n);
		head = head->next;
		if (head == *stack)
			return;
	}

}
