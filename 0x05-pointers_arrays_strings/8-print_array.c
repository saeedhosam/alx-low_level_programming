#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: the array
 * @n: the number of elements of the array
 * Return: nothing.
*/
void print_array(int *a, int n)
{
	for (n = 0; a[n] != '\0'; n++)
	{
		if (n != 0)
			printf(", ");
		printf("%d", a[n]);
	}
	printf("\n");
}
