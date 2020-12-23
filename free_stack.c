#include "monty.h"

/**
 *free_stack - function nto free the stack
 *@stack: double pointer head of the stack
 *Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *head_stack;

	if (stack == NULL)
		return;
	while (stack)
	{
		head_stack = stack;
		stack = stack->next;
		free(head_stack);
	}
}
