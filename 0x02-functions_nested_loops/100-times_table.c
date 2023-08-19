#include "main.h"

/**
 * print_times_table - a function that prints the n times table starting with 0
 * @n: the number of times table
 * Return: Void.
 */
void print_times_table(int n)
{
	int i, j, k, l, m;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n < 0)
			break;
		for (j = 0; j <= n; j++)
		{
			if ((i * j) >= 10)
			{
				l = i * j;
				while (l >= 10)
					l = l / 10;
				_putchar(',');
				_putchar(' ');
				if ((i * j) <= 99)
					_putchar(' ');
				_putchar(l + '0');
				m = ((i * j) % 100)	/ 10;
				if ((i * j) > 99)
					_putchar(m + '0');
				k = (i * j) % 10;
				_putchar(k + '0');
				continue;
			}
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar((i * j) + '0');
		}
		_putchar('\n');
	}
}
