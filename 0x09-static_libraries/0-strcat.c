#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the first string
 * @src: the second string that's to be appended
 * Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0';)
		i++;
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
