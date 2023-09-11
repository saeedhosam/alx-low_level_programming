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

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else

		printf("(nill)");

	printf("Name: %.1f\n", d->age);

	if (d->owner != NULL)
		printf("Name: %s\n", d->owner);
	else
		printf("(nill)");
}
