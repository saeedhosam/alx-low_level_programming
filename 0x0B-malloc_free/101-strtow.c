#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string provided
 * Return: a pointer to an array of strings.
*/
char **strtow(char *str)
{
	unsigned int i, s = 0, k = 0, n = 0;
	char **ptr;

	for (i = 0; i < strlen(str); i++)
		if (str[i] != ' ')
			if (str[i + 1] == ' ')
			{
				s++;
				continue;
			}
	ptr = malloc(sizeof(char *) * (s + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		ptr[i] = malloc(sizeof(char) * (strlen(str) + 1));
	for (k = 0, i = 0; i < strlen(str); i++)
		if (str[i] != ' ')
		{
			ptr[k][n] = str[i];
			n++;
			if (str[i + 1] == ' ')
			{
				k++;
				n = 0;
				continue;
			}
		}
	return (ptr);
}
