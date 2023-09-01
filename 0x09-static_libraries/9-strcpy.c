#include "main.h"

/**
 * _strcpy - a function that copies string by src to buffer by dest
 * @dest: buffer
 * @src: string
 * Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0';)
		i++;
	i = i + 1;
	for (j = 0; j <= i - 1; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
