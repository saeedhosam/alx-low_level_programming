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
	char *name2;
	char *owner2;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	name2 = malloc(sizeof(char) * (strlen(name) + 1));
	if (name2 == NULL)
	{
		free(nd);
		return (NULL);
	}
	strcpy(name2, name);

	owner2 = malloc(sizeof(char) * (strlen(owner) + 1));
	if (owner2 == NULL)
	{
		free(name2);
		free(nd);
		return (NULL);
	}
	strcpy(owner2, owner);

	nd->name = name2;
	nd->age = age;
	nd->owner = owner2;

	return (nd);
}
