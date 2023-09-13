#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 *
 * @array: the array used
 * @size: size of the array
 * @action: a pointer to a function
 *
 * Return: notion
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
		return;
	else if (array == 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
