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
	int i = 0;
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    while (n != 0) {
        i = i * 10 + n % 10;
        n /= 10;
    }
    if (i == 0) {
        _putchar('0');
    }
    while (i != 0) {
        _putchar(i % 10 + '0');
        i /= 10;
    }
}
