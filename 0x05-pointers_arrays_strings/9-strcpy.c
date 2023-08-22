#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies string by src to buffer by dest
 * @dest: buffer
 * @src: string
 * Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	dest = src;
	printf("%s", src);
	return (dest);
}
