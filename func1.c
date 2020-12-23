#include "monty.h"

/**
 *pint - function to print the value at the top of the stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack_len(*stack) < 1)
	{
		fprintf(stderr, "L%d: can't pint, stackempty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
