#include "main.h"

/**
 * puts2 - a function that prints every other character
 * @str: the string's characters
 * Return: nothing.
*/
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
		i++;
	for (j = 0; j <= i; j = j + 2)
		_putchar(str[j]);
	_putchar('\n');
}
