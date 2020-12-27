#include "monty.h"

/**
 *rotl - opcode totates the stack to the top (rotate left)
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack, *new_element;

	(void)line_number;
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	new_element = (*stack)->next;
	new_element->prev = NULL;
	while (element->next != NULL)
		element = element->next;
	element->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = element;
	(*stack) = new_element;
}

/**
 *rotr - opcode rotates the stack to the bottom (rotate right)
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *element = *stack;

	(void)line_number;
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	while (element->next != NULL)
		element = element->next;
	element->next = *stack;
	element->prev->next = NULL;
	element->prev = NULL;
	(*stack)->prev = element;
	(*stack) = element;
}
