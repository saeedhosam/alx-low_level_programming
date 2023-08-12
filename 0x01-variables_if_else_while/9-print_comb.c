#include <stdio.h>

/**
 * main - writing numbers with commas
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
