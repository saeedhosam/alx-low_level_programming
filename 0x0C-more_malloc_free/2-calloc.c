#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in the array
 * @size: number of bytes allocated
 * Return: pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	long unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(size) * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
