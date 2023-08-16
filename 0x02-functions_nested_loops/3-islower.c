#include "main.h"

/**
 * _islower - checks for lowercase characters
 * Return: Always Void.
 */
int _islower(int c)
{
	int c;

	if (c <= 49 && c >= 74)
		return (1);
	else
		return (0);
}
