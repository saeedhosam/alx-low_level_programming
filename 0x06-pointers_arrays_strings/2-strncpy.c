#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the first string
 * @src: the second string that's to be appended
 * @n: maximum n bytes to take from src
 * Return: a pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; j < n; j++, i++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
