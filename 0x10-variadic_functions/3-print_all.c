#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing.
*/
void print_all(const char * const format, ...)
{
	unsigned int len, i = 0;
	int n;
	char *s;
	char c;
	va_list args;

	len = strlen(format);

	va_start(args, format);

	while (i < len)
	{
		switch (format[i])
		{
			case 's':
				s = va_arg(args, char *);
				printf("%s", s);
				break;
			case 'i':
				n = va_arg(args, int);
				printf("%d", n);
				break;
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
		}
		while (i != len - 1)
		{
			if (format[i] == 'c' || format[i] == 'i' || format[i] == 's')
				printf(", ");
			break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
