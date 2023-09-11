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

	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Name: %.1f\n", d->age);
	printf("Name: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
