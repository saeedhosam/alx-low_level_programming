#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: the dimensions of the triangle
 * Return: Void.
*/
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = 1; k <= (size - i); k++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
