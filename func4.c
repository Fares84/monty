#include "monty.h"

/**
 *add - function that adds to the top two elements of the stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *elements;

	elements = *stack;
	if (stack_len(*stack) < 2 || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	elements->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free(elements);
	(*stack)->prev = NULL;
}
