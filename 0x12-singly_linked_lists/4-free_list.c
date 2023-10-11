#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: the first node
 *
 * Return: nothing.
*/
void free_list(list_t *head)
{
	list_t *cn;

	while (head != NULL)
	{
		cn = head;
		head = head->next;
		free(cn->str);
		free(cn);
	}
}
