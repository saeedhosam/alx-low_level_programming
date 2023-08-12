#include <stdio.h>

/**
 * main - alphabet from bottom to top
 *
 * Return: 0 Always
 */
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);
	putchar('\n');
	return (0);
}
