#include "monty.h"

/**
 *pop - function to remove the top element of the stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (stack_len(*stack) < 1 || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	delete_dnodeint_at_index(stack, 0);
}
