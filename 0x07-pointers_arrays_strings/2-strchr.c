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

	if (c == '\0')
		return (NULL);
	for (i = 0; s[i] != '\0';)
		i++;
	if (i == 0)
		return (NULL);
	for (n = 0; n < i; n++)
		if (s[n] == c)
			str = &s[n];
		else
			return ("(null)");
	return (str);
}
