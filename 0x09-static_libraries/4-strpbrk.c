#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be fetched
 * @accept: what to search for
 *
 * Return: string.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == accept[j])
			return (&s[i]);
		else
			return (NULL);
	}
}
