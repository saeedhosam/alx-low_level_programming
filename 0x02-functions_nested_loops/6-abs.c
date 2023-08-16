#include "main.h"

/**
 * _abs - converting any number to its absolute.
 * @n: Where the number is stored.
 * Return: 1, 0, or -1.
 */
int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}
