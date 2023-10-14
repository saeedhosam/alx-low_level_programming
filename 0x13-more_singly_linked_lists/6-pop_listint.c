#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: the header node of the list
 *
 * Return: head node’s data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *cn;
	int n;

	if (*head == NULL)
		return (0);

	cn = *head;
	n = cn->n;
	*head = (*head)->next;

	free(cn);

	return (n);
}
