#include "monty.h"

/**
 *sub - function to substruct the top element of the stack
 *from the second top element
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *element;

	element = *stack;
	if (stack_len(*stack) < 2 || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
line_number);
		exit(EXIT_FAILURE);
	}
	element->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	free(element);
	(*stack)->prev = NULL;
}
