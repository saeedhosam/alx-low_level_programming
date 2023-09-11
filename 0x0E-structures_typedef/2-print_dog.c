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
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(null)");
}
