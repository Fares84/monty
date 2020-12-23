#include "monty.h"

/**
 *push - function to insert an element at the top of the stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opdoce
 *Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *push_op;
	(void)line_number;

	push_op = malloc(sizeof(stack_t));
	if (push_op == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	push_op->next = *stack;
	push_op->prev = NULL;
	push_op->n = value;
	if (*stack)
		(*stack)->prev = push_op;
	*stack = push_op;
}

/**
 *pall - function to print all the values of the stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opdoce
 *Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	const stack_t *pall_op;
	(void) line_number;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	pall_op = *stack;
	while (pall_op != NULL)
	{
		fprintf(stdout, "%d\n", pall_op->n);
		pall_op = pall_op->next;
	}
}
