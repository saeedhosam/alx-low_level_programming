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
	int i;
	char *ptr;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	ptr = malloc(sizeof(char *) * ac);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}
	return (ptr);
}
