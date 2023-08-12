#include <stdio.h>

/**
 * main - printing 3 digits without repeition
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
			for (k = j + 1; k <= 9; k++)
			{
				if (i == j)
					continue;
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i == 7)
					continue;
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
