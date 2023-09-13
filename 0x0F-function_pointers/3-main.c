#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*ptr)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);
	res = ptr(num1, num2);

	printf("%d\n", res);

	return (0);
}
