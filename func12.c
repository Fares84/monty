#include "monty.h"

/**
 *pstr - fucntion to print the string starting at the top of stack
 *@stack: double pointer to a double linked list as stack
 *@line_number: the number of lines inside the opcode
 *Return: void
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *element;
	char c;

	(void)line_number;
	element = *stack;
	while (stack_len(*stack) != 0)
	{
		if (isalpha(element->n) == 0 || element == NULL)
			break;
		c = element->n;
		printf("%c", c);
		element = element->next;
	}
	printf("\n");
}
