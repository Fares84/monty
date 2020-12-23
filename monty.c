#include "monty.h"

/**
 *main - main function to entry point of Monty interpreter
 *@argc: number of arguments passer to the interpreter
 *@argv: arguments passed to the interpreter
 *Return: 0 if success otherwise exit failure
 */
int main(int argc, char **argv)
{
	FILE *fp; /* pointer to opcode file passed to the monty interpreter */
	char **tokens;
	char *buffer = NULL;
	size_t size = 0;
	stack_t *stack = NULL;
	int line_number = 1;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Cant't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &size, fp) != -1)
	{
		line_number++;
		tokens = tokenizer(buffer);
		if (tokens == NULL)
			continue;
		get_functions(tokens, buffer, &stack, line_number, fp);
		free(tokens);
	}
	free(buffer);
	free_stack(stack);
	fclose(fp);
	return (0);
}
