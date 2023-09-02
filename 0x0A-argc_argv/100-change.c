#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
*/
int main(int argc, char *argv[])
{
	int c, i;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; c != 0; i++)
	{
		if (c >= 25)
			c = c - 25;
		else if (c >= 10)
			c = c - 10;
		else if (c >= 5)
			c = c - 5;
		else if (c >= 2)
			c = c - 2;
		else if (c >= 1)
			c = c - 1;
	}
	printf("%d\n", i);
	return (0);
}
