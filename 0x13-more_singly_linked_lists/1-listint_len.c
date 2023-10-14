#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: the header node of the list
 *
 * Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
