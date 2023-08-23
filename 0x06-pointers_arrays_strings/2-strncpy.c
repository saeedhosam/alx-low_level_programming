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
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
