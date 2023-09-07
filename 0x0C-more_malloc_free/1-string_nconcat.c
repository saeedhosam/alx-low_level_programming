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
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	if (n >= strlen(s2))
		n = strlen(s2);

	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for (i = 0; i < n; i++)
		ptr[strlen(s1) + i] = s2[i];
	ptr[strlen(s1) + i] = '\0';

	return (ptr);
}
