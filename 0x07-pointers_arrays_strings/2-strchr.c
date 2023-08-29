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
	int i;
	char *str;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			str = &s[i];
			break;
		}
		else
			str = '\0';
	}
	if (s[0] == '\0')
		str = '\0';
	return (str);
}
