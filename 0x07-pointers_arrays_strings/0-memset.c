#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: points to the memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
