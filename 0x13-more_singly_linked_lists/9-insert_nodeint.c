#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the header node of the list
 * @idx: the position where the new node to be placed
 * @n: the element of the new node
 *
 * Return: the sum of all the data (n)
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cn = *head, *nn;
	unsigned int i;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}

	for (i = 0; cn != NULL; i++)
	{
		if (i == idx - 1)
		{
			nn->next = cn->next;
			cn->next = nn;
			return (nn);
		}

		cn = cn->next;
	}

	return (NULL);
}
