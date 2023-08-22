#include "main.h"

/**
 * rev_string - a function that prints a string in reverse
 * @s: the string's characters
 * Return: nothing.
*/
void rev_string(char *s)
{
	int i, j;
	char k;

	for (i = 0; *(s + i) != '\0';)
		i++;
	for (j = 0; j < (i / 2); j++)
	{
		k = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = k;
	}
}
