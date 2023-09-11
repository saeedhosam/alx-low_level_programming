#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function for another dog
 *
 * @name: the dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t) + 1);
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
