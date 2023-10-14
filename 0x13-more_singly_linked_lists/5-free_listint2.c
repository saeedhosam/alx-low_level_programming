#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: the header node of the list
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *cn, *n;

	if (head == NULL)
		return;

	cn = *head;
	while (cn != NULL)
	{
		n = cn->next;
		free(cn);
		cn = n;
	}

	*head = NULL;
}
