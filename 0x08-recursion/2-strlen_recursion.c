#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string.
 * @s: the string to be printed
 * Return: int
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_strlen_recursion(s + 1);
}
