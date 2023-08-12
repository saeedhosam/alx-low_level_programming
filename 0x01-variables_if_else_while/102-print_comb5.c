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
	int k;
	int l = 0;
	const int n = 9;

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
			for (k = i; k <= n; k++)
				for (l = 1; l <= n; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
	putchar('\n');
	return (0);
}
