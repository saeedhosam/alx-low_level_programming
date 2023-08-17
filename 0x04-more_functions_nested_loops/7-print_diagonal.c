#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: the length of the straight diagonal line
 * Return: Void.
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
			continue;
		for (j = 0; j <= i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	_putchar('\n');
}
