#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: The character to print
 * @name: The character to print
 * @age: The character to print
 * @owner: The character to print
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
