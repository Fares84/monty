#include "monty.h"

/**
 *mul - function to that multiplies second top node from top node
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *element;

	element = *stack;
	if (stack_len(*stack) < 2 || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	element->next->n *= (*stack)->n;
	*stack = (*stack)->next;
	free(element);
	(*stack)->prev = NULL;
}
