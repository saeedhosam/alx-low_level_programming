#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: the header node of the list
 *
 * Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
