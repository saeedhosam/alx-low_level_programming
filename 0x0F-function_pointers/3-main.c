#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: arguements count
 * @argv: arguements strings
 *
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") != 0 &&
		strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "*") != 0 &&
		strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	res = ptr(num1, num2);

	printf("res = %d\n", res);

	return (0);
}
