#include <stdio.h>

/**
 * main - 4 digits, 2 x 2, counting on each other
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
		for (j = 0; j <= 99; j++)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
				if (i == 98)
					continue;
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
