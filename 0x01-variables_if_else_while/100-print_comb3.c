#include <stdio.h>

/**
 * main - printing set of two numbers without repeating
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
		{
			if (i == j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8)
				continue;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
