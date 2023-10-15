#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 *
 * @head: the header node of the list
 * @index: the node to be deleted
 *
 * Return: the sum of all the data (n)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cn = *head, *behind = NULL;
	unsigned int i;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cn);
		return (1);
	}

	for (i = 0; cn != NULL; i++)
	{
		if (i == index)
		{
			behind->next = cn->next;
			free(cn);
			return (1);
		}

		behind = cn;
		cn = cn->next;
	}

	return (-1);
}
