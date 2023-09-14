#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: sum of all paramters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list wut;
	unsigned int i;
	int j = 0;

	if (n == 0)
		return (0);

	va_start(wut, n);

	for (i = 0; i < n; i++)
	{
		j += va_arg(wut, int);
	}

	va_end(wut);

	return (j);
}
