#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to printed between strings
 * @n: number of strings passed to the functions
 *
 * Return: nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list wut;
	unsigned int i;
	char *str;

	if (n == 0)
		return;
	va_start(wut, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(wut, char *);
		if (i == (n - 1))
			printf("%s", str);
		else if (str == NULL)
		{
			str = "(nil)";
			printf("%s%s", str, (separator == NULL) ? "" : separator);
		}
		else
			printf("%s%s", str, (separator == NULL) ? "" : separator);
	}
	printf("\n");

	va_end(wut);
}
