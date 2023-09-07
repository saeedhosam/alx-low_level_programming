#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: the memory block to be reallocated
 * @old_size: old size to be allocated
 * @new_size: new size to be allocated
 * Return: a pointer.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_int;
	char *new;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	new_int = (char *)ptr;
	for (i = 0; i < old_size; i++)
	{
		new[i] = new_int[i];
	}
	free(ptr);

	return (new);
}
