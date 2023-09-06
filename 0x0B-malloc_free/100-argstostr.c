#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments called
 * @av: pointer to an array of pointers
 * Return: string.
*/
char *argstostr(int ac, char **av)
{
	int i, j;
	int n;
	char *ptr;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
		n = n + strlen(av[j]);

	ptr = malloc(sizeof(char) * (n + ac));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}
	return (ptr);
}
