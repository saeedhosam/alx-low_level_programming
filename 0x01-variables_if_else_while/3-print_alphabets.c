#include <stdio.h>

/**
 * main - putchar tests
 *
 * Return: 0 Always
 */
int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
