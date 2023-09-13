#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the array used
 * @size: size of the array
 * @cmp: a pointer to a function
 *
 * Return: notion
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);
	else if (array == 0)
		return (-1);
	else if (cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j == 1)
			return (i);
	}
	return (-1);
}
