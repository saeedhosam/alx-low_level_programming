#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string that has initial segment
 * @accept: the bytes
 *
 * Return: string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	for (n = 0; accept[n] != '\0';)
		n++;

	for (i = 0, j = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				break;
		if (j == n)
			break;
	}
	return (i);
}
