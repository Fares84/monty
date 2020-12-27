#include "monty.h"

/**
*get_functions - function to call the function to the instruction
*@tokens: array of strings passed and tokinzed
*@stack: double pointer head of the stack
*@buffer: arrays of string in getline passed to the interpreter
*@line_number: number of line in the opcode file
*@fp: pointer to the file name passed to the monty interpreter
*Return: void
*/
void get_functions(char **tokens, char *buffer, stack_t **stack,
unsigned int line_number, FILE *fp)
{
	int i = 0;
	char *scan = tokens[1];
	instruction_t op_functions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", op_div}, {"mul", mul}, {"mod", mod}, {"pchar", pchar},
		{"pstr", pstr}, {"rotl", rotl}, {"rotr", rotr},
		{"stack", stack_lifo}, {"queue", queue_fifo},
		{NULL, NULL}
	};

	if (strcmp(tokens[0], "push") == 0)
	{
		if (!tokens[1] || isdigit(*scan) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n",
				line_number);
			free(tokens);
			free(buffer);
			free_stack(*stack);
			fclose(fp);
			exit(EXIT_FAILURE);
		}
	}
	if (tokens[1])
		value = atoi(tokens[1]);
	while (op_functions[i].opcode != NULL)
	{
		if (strcmp(op_functions[i].opcode, tokens[0]) == 0)
			op_functions[i].f(stack, line_number);
		i++;
	}
}
