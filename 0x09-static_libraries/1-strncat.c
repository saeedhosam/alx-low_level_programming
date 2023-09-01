#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the second string that's to be appended
 * @n: maximum n bytes to take from src
 * Return: a pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; j < n; j++, i++)
	{
		if (n > i)
			n = i;
		dest[i] = src[j];
	}
	return (dest);
}
