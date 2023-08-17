#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the length of the straight line
 * Return: Void.
*/
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
			continue;
		_putchar('_');
	}
	_putchar('\n');
}
