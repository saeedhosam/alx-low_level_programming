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

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Name: %.1f\n", d->age);

	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
