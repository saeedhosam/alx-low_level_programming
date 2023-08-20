#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers
 * Return: 0 Always.
 */
int main(void)
{
	int n;
	long fn3 = 0;
	long fn2 = 1;
	long fn1;
	int i = 50;

		for (n = 1; n < i; n++)
		{
			if (n < 1)
				fn1 = n;
			else
			{
				fn1 = fn2 + fn3;
				fn2 = fn3;
				fn3 = fn1;
			}
			printf("%ld", fn1);
			if (n != (i - 1))
				printf(", ");
		}
		printf("\n");

	return (0);
}
