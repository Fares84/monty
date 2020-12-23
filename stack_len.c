#include "monty.h"

/**
 *stack_len - function that counts the length of doubly linked list
 *@stack: double pointer ti a double linked list as stack
 *Return: length size_t
 */
size_t stack_len(const stack_t *stack)
{
	size_t len = 0;

	while (stack)
	{
		stack = stack->next;
		len++;
	}
	return (len);
}
