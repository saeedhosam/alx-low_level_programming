#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the first 50 Fibonacci numbers
 * Return: 0 Always.
 */
int main(void)
{
	int n;
	int fn3 = 0;
	int fn2 = 1;
	int fn1;
	int i = 50;

		for (n = 0; n < i; n++)
		{
			if (n < 1)
				fn1 = n;
			else
			{
				fn1 = fn2 + fn3;
				fn2 = fn3;
				fn3 = fn1;
			}
			printf("%d", fn1);
			if (n != (i - 1))
				printf(", ");
		}
		printf("\n");

	return (0);
}

/**
 * 0, 1, 
 */

