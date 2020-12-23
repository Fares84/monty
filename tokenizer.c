#include "monty.h"

/**
 *tokenizer - function to tokenize a string into tokens
 *@str: string to be tonkenized
 *Return: array of tokens
 */
char **tokenizer(char *str)
{
	int i = 0;
	char  *token;
	char **tokens;
	char *del = " \t\a\n";

	tokens = malloc(sizeof(char *) * 32);
	if (tokens == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}
	*tokens = NULL;
	token = strtok(str, del);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, del);
	}
	if (token == NULL && *tokens == NULL)
	{
		free(tokens);
		return (NULL);
	}
	tokens[i] = NULL;
	return (tokens);
}
