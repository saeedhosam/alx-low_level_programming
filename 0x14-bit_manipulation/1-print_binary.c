#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the int being converted
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int i, x = 0, d;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		d = (n >> i) & 1;
		if (d == 1)
			x = 1;
		else if (d == 0 && x == 0)
			continue;

		if (x > 0)
			printf("%ld", (n >> i) & 1);
	}
}
