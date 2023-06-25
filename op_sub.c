#include "monty.h"
/**
 * sub - The method that subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: The head of the stack
 * @line_number: The error occurred line
 *
 * Return: Nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int i = 0, j = 0, length = 0;

	length = count_stack(*stack);

	if (length < 2)
		handle_error(ERR_SUB_USG, NULL, line_number, NULL);

	i = temp->n;
	j = temp->next->n;
	temp->next->n = j - i;
	*stack = temp->next;
	free(temp);
}
