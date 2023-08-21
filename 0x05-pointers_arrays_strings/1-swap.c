#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first parameter that's being swapped
 * @b: the second parameter that's being swapped
 * Return: nothing.
*/
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
