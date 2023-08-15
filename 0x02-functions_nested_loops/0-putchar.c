#include "main.h"

/**
 * main - Writing a program that prints _putchar, followed by a new line.
 *
 * Return: 0 Always
 */
int main(void)
{
	char c[9] = "_putchar";
	int i;
	for (i = 0; i < 9; i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
