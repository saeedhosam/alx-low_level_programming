#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: int.
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		sum1 = sum1 + s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		sum2 = sum2 + s2[j];
	return (sum1 - sum2);
}
