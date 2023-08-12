#include <stdio.h>

/**
 * main - writing numbers with commas
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
		putchar(',');
	}
	putchar('9');
	putchar('\n');
	return (0);
}
