#include "monty.h"

/**
 *swap - function that swaps the top two elements of the stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *element1, *element2;
	int data;

	if (stack_len(*stack) < 2 || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	element1 = *stack;
	element2 = element1->next;
	data = element1->n;
	element1->n = element2->n;
	element2->n = data;
}
