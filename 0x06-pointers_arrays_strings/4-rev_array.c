#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array
 * @n: size of array
 * Return: nothing
*/
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - j - 1];
		a[n - j - 1] = j;
	}
}
