#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: the operation operator
 *
 * Return: a pointer to the function desiresd
*/
int (*get_op_func(char *s))(int, int)
{
	int (*op)(int, int);
	
	if (s == "+\0")
	{
		op = op_add;
		return (op);
	}
}
