#include <stdio.h>

/**
 * main - convert decimal into chars like in the ASCI II table
 *
 * Return: 0 Always
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
