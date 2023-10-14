#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: the header node of the list
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *cn;

	while (head != NULL)
	{
		cn = head;
		head = head->next;
		free(cn);
	}
}
