#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: Where the number is stored.
 * Return: 1, 0, or -1.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -1 * n;
    n = n % 10;
    _putchar(n + '0');
	return (n);
}
