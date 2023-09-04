#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: string.
*/
char *_strdup(char *str)
{
	int i;
	char *ptr;

	for (i = 0; str[i] != '\0';)
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	strcpy(ptr, str);
	return (ptr);
}
