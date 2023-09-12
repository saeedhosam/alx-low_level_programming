#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function for another dog
 *
 * @d: a pointer to the struct dog
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
