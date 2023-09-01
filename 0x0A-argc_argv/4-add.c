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
		if (argc > 1 && atoi(argv[argc - 1]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		i = i + atoi(argv[argc - 1]);
	}
	printf("%d\n", i);
	return (0);
}
