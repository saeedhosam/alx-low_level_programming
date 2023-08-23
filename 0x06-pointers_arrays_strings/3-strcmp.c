#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: int.
*/
int _strcmp(char *s1, char *s2)
{
	int i, dif;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			dif = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			dif = 0;
			break;
		}
	}
	return (dif);
}
