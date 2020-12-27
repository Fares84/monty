#include "monty.h"

/**
 *pchar - fucntion to print character of top stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *element;
	char c;

	element = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	c = element->n;
	if (isalpha(element->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range",
			line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", c);
}
