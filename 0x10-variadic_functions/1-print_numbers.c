#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the string to printed between numbers
 * @n: number of integers passed to the functions
 *
 * Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list wut;
	unsigned int i;
	int num;

	va_start(wut, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(wut, int);
		if (i == (n - 1))
			printf("%d", num);
		else
			printf("%d%s", num, (separator == NULL) ? "" : separator);
	}
	printf("\n");

	va_end(wut);
}
