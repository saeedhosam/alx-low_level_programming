#include <stdio.h>

/**
 * main - printing numbers of base 10 without using char
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
}
