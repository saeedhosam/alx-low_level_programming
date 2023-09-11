#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	nd->name = malloc(sizeof(char) * strlen(name));
	nd->owner = malloc(sizeof(char) * strlen(owner));

	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
