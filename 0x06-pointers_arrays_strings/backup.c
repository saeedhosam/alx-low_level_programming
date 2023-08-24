#include <stdio.h>
#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: an integer.
 * Return: nothing.
*/
void print_number(int n)
{
	int i, m = n, oldn = n, div = 1;

	for (i = -1; m != 0; i++)
		m = m / 10;

	printf("i = %d\n", i);
	if (n < 0)
		_putchar('-');
	if (n > 0)
	{
		while (n != 0)
		{
			n = n / 1000 / div;
		}
			printf("%d\n", n);
			n = oldn;
			div = div * 10;
	}
	if (n == 0)
		_putchar('0');
}
