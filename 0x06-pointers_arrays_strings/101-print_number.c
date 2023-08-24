#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: an integer.
 * Return: nothing.
*/
void print_number(int n)
{
	int i, num1, num2 = 0, num3 = 0, num4 = 0, m;

	if (n < 0)
	{
		m = n;
		n = n * -1;
	}
	for (i = 0; i <= n; i++)
	{
		if (n < 10)
			num1 = i + '0';
		else if (n >= 10 && n < 100)
		{
			num1 = (n / 10) + '0';
			num2 = (i % 10) + '0';
		}
		else if (n >= 100 && n < 1000)
		{
			num1 = (i / 100) + '0';
			num2 = ((i / 10) % 10) + '0';
			num3 = (i % 10) + '0';
		}
		else if (n >= 1000 && n < 10000)
		{
			num1 = (i / 1000) + '0';
			num2 = ((i / 100) % 10) + '0';
			num3 = ((i / 10) % 10) + '0';
			num4 = (i % 10) + '0';
		}
	}
	if (m < 0)
		_putchar('-');
	_putchar(num1);
	_putchar(num2);
	_putchar(num3);
	_putchar(num4);
}
