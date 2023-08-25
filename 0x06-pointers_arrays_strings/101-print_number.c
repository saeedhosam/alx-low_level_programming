#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: an integer.
 * Return: nothing.
*/
void print_number(int n)
{
	int j = 0;
	int orig = n;
	unsigned int i = 0;

	if (n == -2147483648)
	{
		n += 1;
		orig += 1;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		orig = -orig;
	}
	if (n == 0)
		_putchar('0');
	if (n > 0)
	{
		j = n % 10;
		if (n >= 214748364)
			n = n / 10;
		for (; n != 0; n = n / 10)
			i = i * 10 + n % 10;
		for (; i != 0; i = i / 10)
			_putchar(i % 10 + '0');
		if (orig % 10 == 0 && orig != 0)
			_putchar('0');
		if (orig >= 214748364)
			_putchar(j + '0');
	}
}
