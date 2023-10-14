#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: the header node of the list
 * @n: the node's element
 *
 * Return: the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = *head;
	*head = nn;

	return (nn);
}
