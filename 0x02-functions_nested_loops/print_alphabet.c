#include "main.h"

/**
 * print_alphabet - write the lowercased alphabets
 * @c: The character to print
 *
 * Return: Void.
 */
void print_alphabet(void)
{
	int i;
	
	for (i = 49; i < 75; i++)
		_putchar(i + '0');
	_putchar('\n');
}
