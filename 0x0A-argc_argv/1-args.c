#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
*/
int main(int argc, char *argv[])
{
	argv[0] = argv[1];
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
