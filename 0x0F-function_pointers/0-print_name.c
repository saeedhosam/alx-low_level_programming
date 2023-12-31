#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the name to be printed
 * @f: a pointer to function
 *
 * Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else if (f == NULL)
		return;
	f(name);
}
