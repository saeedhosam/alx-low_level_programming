#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: the header node of the list
 * @index: the node needed
 *
 * Return: head node’s data (n)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cn;
	unsigned int i;

	cn = head;
	for (i = 0; i <= index; i++)
	{
		if (i == index)
		{
			return (cn);
		}
		else
		{
			cn = cn->next;
		}
	}

	return (NULL);
}
