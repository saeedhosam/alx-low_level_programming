#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the opcode of its own main function
 *
 * @argc: arguement count
 * @argv: arguement strings
 *
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int nb;
	size_t i;
	int (*wut)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	wut = &main;

	for (i = 0; i < nb; i++)
	{
		printf("%.2x ", *((unsigned char *)wut + i));
	}

	printf("\n");

	return (0);
}
