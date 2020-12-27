#include "monty.h"

/**
 *op_div - function to divides second top node from top node
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void op_div(stack_t **stack, unsigned int line_number)
{
	stack_t *element;

	element = *stack;
	if (stack_len(*stack) < 2 || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n",
			line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	if (element->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	element->next->n /= (*stack)->n;
	*stack = (*stack)->next;
	free(element);
	(*stack)->prev = NULL;
}
