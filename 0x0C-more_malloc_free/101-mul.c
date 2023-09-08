#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument strings
 * Return: int.
*/
int main(int argc, char *argv[])
{
	int num1, num2, i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[1]) > 2 || strlen(argv[2]) > 2)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i <= 2; i++)
		for (j = 0; j <= 1; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}

	num1 = (argv[1][0] - 48) * 10 + (argv[1][1] - 48);
	num2 = (argv[2][0] - 48) * 10 + (argv[2][1] - 48);
	printf("%d\n", num1 * num2);
	return (0);
}
