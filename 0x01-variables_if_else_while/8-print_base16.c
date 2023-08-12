#include <stdio.h>

/**
 * main - writing numbers and alphabets
 *
 * Return: 0 Always
 */
int main(void)
{
	char a;
	char b;
	char c = '1';

	for (a = '1'; a <= '9'; a++)
		putchar(a);
	for (b = '0'; b <= '5'; b++)
		putchar(c + b);
	putchar('\n');
	return (0);
}
