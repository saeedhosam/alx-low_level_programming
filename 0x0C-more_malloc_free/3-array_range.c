#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 * Return: pointer to an array of integers.
*/
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
	{
		ptr[j] = i;
	}

	return (ptr);
}
