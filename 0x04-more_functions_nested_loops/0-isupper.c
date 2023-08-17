#include "main.h"

/**
 * _isupper - a function that checks for uppercase characters
 * @c: the character that's stored
 * Return: 1 or 0.
*/
int _isupper(int c)
{
	if (c <= 90 && c >= 60)
		return (1);
	else
		return (0);
}
