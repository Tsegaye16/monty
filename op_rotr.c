#include "monty.h"
/**
  * rotr - The function that rotates the stack to the bottom
  * @stack: The head of the stack
  * @line_number: The error occurred line
  *
  * Return: Nothing
  */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last = NULL;
	(void) line_number;

	if (*stack && (*stack)->next)
	{
		last = *stack;

		while (last->next != NULL)
			last = last->next;

		last->prev->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}
