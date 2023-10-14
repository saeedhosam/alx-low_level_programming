#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: the header node of the list
 * @n: the node's element
 *
 * Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn, *cn;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
		*head = nn;
	else
	{
		cn = *head;
		while (cn->next != NULL)
		{
			cn = cn->next;
		}
		cn->next = nn;
	}
	return (nn);
}
