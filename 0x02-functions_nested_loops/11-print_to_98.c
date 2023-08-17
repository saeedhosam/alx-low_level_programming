#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * @n: from where we start ISA
 * Return: int.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
		}
	}
	if (n >= 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%i", i);
			if (i != 98)
				printf(", ");
			if (i == 98)
				printf("98");
		}
	}
	putchar('\n');
}
