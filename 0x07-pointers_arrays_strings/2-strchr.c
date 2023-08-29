#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: the string that has the character
 * @c: the character to be located
 *
 * Return: string.
 */
char *_strchr(char *s, char c)
{
	int i, n;
	char *str;

	for (n = 0; s[n] != '\0';)
		n++;
	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
		{
			str = &s[i];
			break;
		}
	}
	return (str);
}
