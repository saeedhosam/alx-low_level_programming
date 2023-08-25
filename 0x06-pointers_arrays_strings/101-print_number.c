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
	int orig = n;
	unsigned int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	for (; n != 0; n = n / 10)
		i = i * 10 + n % 10;
	for (; i != 0; i = i / 10)
		_putchar(i % 10 + '0');
	if (orig % 10 == 0 && orig != 0)
		_putchar('0');
}
