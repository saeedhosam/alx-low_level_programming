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
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
