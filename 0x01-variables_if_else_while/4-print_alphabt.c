#include <stdio.h>

/**
 * main - printing alphabets except q and e
 *
 * Return: 0 Always
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
