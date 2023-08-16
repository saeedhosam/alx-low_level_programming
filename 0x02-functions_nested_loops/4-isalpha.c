#include "main.h"

/**
 * _isalpha - checks for c is a lowercase character or not.
 * @c: Where the the character stored.
 * Return: 1 if the characteris lowercase and 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
