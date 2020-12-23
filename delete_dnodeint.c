#include "monty.h"

/**
 *delete_dnodeint_at_index - delete node at given index DLL
 *@head: head node
 *@index: index
 *Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index)
{
	unsigned int i = 0;
	stack_t  *save_next, *save_prev;

	save_prev = *head;
	if (index == 0)
	{
		if (!save_prev)
			return (-1);
		*head = save_prev->next;
		if (*head)
			(*head)->prev = NULL;
		free(save_prev);
		return (1);
	}

	while (save_prev)
	{
		if (i == index - 1)
		{
			save_next = save_prev->next;
			if (save_next)
			{
				save_prev->next = save_next->next;
				if (save_next->next)
					save_next->next->prev = save_prev;
				free(save_next);
				return (1);
			}
		}
		save_prev = save_prev->next;
		i++;
	}
	return (-1);
}
