#include "monty.h"
/**
 * add - Adds the top two elements of the stack
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 *
 * Return: Nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int i = 0, j = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		handle_error(ERR_ADD_USG, NULL, line_number, NULL);
	i = temp->n;
	j = temp->next->n;
	temp->next->n = i + j;
	*stack = temp->next;
	free(temp);
}
