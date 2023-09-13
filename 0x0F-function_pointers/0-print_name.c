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
 * Return: notion
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
