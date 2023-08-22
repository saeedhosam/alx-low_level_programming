#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: the string converted
 * Return: int.
*/
int _atoi(char *s)
{
	int i, k = 1;
	unsigned int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			j = j * 10 + (s[i] - '0');
		}
		else if (s[i] == 45)
			k = k * -1;
		else if (s[i] == 43)
			k = k * 1;
		else if (j != 0)
			break;
	}
	return (k * j);
}
