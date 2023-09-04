#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: string.
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *ptr;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);
	ptr = malloc((sizeof(char) * len1 + sizeof(char) * len2) + 1);
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
		strcat(ptr, s1);
	if (s2 != NULL)
		strcat(ptr, s2);
	return (ptr);
}
