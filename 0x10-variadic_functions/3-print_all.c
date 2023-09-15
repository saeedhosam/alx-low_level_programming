#include <stdio.h>
#include <stdarg.h>
#include <string.h>
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
	va_list args;

	if (format == NULL)
		return;
	len = strlen(format);
	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
			case 's':
				if (va_arg(args, char *) == NULL)
					printf("(nil)");
				if (va_arg(args, char *) != NULL)
					printf("%s", va_arg(args, char *));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			default:
				i++;
				continue;
		}
		while (i != (len - 1))
		{
			printf(", ");
			break;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
