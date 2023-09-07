#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes of s2
 * Return: a pointer to a string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	if (n >= strlen(s2))
		n = strlen(s2);

	ptr = malloc(sizeof(char *) * (strlen(s1) + n));
	if (ptr == NULL)
		return (NULL);

	strcat(ptr, s1);
	for (i = 0; i < n; i++)
		ptr[strlen(s1) + i] = s2[i];

	return (ptr);
}
