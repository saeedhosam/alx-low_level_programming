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
	int x, y;

	if (argv[1] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
