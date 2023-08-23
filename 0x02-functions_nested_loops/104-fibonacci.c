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
	int i = 102;
	long half1;
	long div = 0;

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
			if (n < 2)
				continue;
			if (fn1 > 4660046610375530309)
			{
				for (div = 1; div < fn1; div++)
				if (fn1 % div == 0)
				{
					half1 = fn1 / div;
					printf("%ld%ld", half1, (half1))
				}
			}
			if (n >= 2)
				printf("%ld", fn1);
			if (n != i - 1)
				printf(", ");
		}
		printf("\n");

	return (0);
}
