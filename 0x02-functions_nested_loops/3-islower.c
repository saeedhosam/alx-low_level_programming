#include "main.h"

/**
 * _islower - checks for c is a lowercase character or not
 * Return: 1 if the characteris lowercase and 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
