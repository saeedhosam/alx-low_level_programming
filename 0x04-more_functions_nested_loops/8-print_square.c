#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: the dimensions of the square
 * Return: Void.
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
