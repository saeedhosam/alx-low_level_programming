#include "main.h"

/**
 * puts_half - a function that prints the sacond half a string
 * @str: the string's characters
 * Return: nothing.
*/
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
		i++;
	if (i % 2 == 0)
	{
		for (j = 0; j < i / 2; j++)
			_putchar(str[j + i / 2]);
	}
	else
	{
		for (j = 1; j <= i / 2; j++)
			_putchar(str[j + (i - 1) / 2]);
	}
	_putchar('\n');
}
