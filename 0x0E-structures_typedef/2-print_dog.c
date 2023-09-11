#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: the pointer to the address of the struct variable
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %.1f\n", d->age);

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
