#include "main.h"

/**
 * puts_half - a function that prints half a string
 * @str: the string's characters
 * Return: nothing.
*/
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
		i++;
	for (j = 0; j < i / 2; j++)
	{
		if (i % 3 == 0)
			_putchar(str[j + (i - 1) / 2]);
		else
			_putchar(str[j + i / 2]);
	}
	_putchar('\n');
}
