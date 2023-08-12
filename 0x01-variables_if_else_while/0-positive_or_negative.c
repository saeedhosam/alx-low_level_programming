#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Discovering whether the number is positive or negative
 *
 * Return: 0 Always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
