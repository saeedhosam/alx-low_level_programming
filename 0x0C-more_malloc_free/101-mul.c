#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

void mul(int *num1, int *num2, unsigned int len1, unsigned int len2);
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument strings
 * Return: int.
*/
int main(int argc, char *argv[])
{
	unsigned int i, j, len1, len2;
	int *num1;
	int *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < 3; i++)
		for (j = 0; j < strlen(argv[i]); j++)
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	num1 = malloc(sizeof(int) * strlen(argv[1]));
	num2 = malloc(sizeof(int) * strlen(argv[2]));

	for (i = 0; argv[1][i] != '\0'; i++)
		num1[i] = argv[1][i] - 48;

	for (i = 0; argv[2][i] != '\0'; i++)
		num2[i] = argv[2][i] - 48;

	for (i = 0; i < strlen(argv[1]); i++)
		printf("%d", num1[i]);
	putchar('\n');
	for (i = 0; i < strlen(argv[2]); i++)
		printf("%d", num2[i]);
	putchar('\n');

	mul(num1, num2, len1, len2);

	return (0);
}

/**
 * mul - multiplying digit by digit
 * @num1: array one
 * @num2: array two
 * @len1: length of array one
 * @len2: length of array two
 * Return: nothing.
*/
void mul(int *num1, int *num2, unsigned int len1, unsigned int len2)
{
	int n, m;
	unsigned int i, k = 0, product = 0;
	int *mul;

	mul = malloc(sizeof(int) * (len1 + len2));

	for (i = 0; i < len1 + len2; i++)
		mul[i] = 0;

	for (n = len1 - 1; n >= 0; n--)
	{
		k = 0;
		for (m = len2 - 1; m >= 0; m--)
		{
			product = num1[n] * num2[m] + k + mul[n + m + 1];
			k = product / 10;
			mul[n + m + 1] = product % 10;
		}
		mul[n + m + 1] += k;
	}
	for (i = 0; mul[i] == 0 && i < len1 + len2 - 1;)
		i++;

	for (; i < len1 + len2; i++)
		printf("%d", mul[i]);
	printf("\n");

	free(mul);
}
