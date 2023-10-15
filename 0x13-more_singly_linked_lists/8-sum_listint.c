#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data n of a listint_t linked list
 *
 * @head: the header node of the list
 *
 * Return: the sum of all the data (n)
*/
int sum_listint(listint_t *head)
{
	int sum_n = 0;

	while (head != NULL)
	{
		sum_n = sum_n + head->n;
		head = head->next;
	}

	return (sum_n);
}
