#include "monty.h"

/**
 *stack_lifo - opcode sets the format of the data to a stack lifo
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void stack_lifo(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	value = 0;
}

/**
 *queue_fifo - opcode sets the format of the data to a fifo
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void queue_fifo(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	(void)stack;
	value = 1;
}
