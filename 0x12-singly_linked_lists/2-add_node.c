#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: the first node
 * @str: the node to be printed
 *
 * Return: size_t
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *nn;

	nn = malloc(sizeof(list_t));
	if (nn == NULL)
		return (NULL);

	nn->str = strdup(str);
	nn->len = strlen(str);
	nn->next = *head;
	*head = nn;

	return (nn);
}
