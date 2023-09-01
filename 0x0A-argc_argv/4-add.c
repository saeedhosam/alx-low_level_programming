#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
*/
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (; argc >= 1; argc--)
	{
		char *c = argv[argc - 1];

		if (argc > 1)
			if (c[0] < 48 || c[0] > 57)
			{
				printf("Error\n");
				return (1);
			}
		i = i + atoi(argv[argc - 1]);
	}
	printf("%d\n", i);
	return (0);
}
