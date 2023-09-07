#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: still don't know
 * Return: nothing.
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return ((void *)p);
}
