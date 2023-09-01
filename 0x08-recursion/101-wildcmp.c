#include <stdio.h>
#include "main.h"

/**
 * wut - takes the two strings with an increasing value to compare
 * @one: first string
 * @two: second string
 * @n: index position in one
 * @i: index position in two
 * Return: integer
*/
int wut(char *one, char *two, int n, int i)
{
	if (two[i] == '*')
	{
		if (two[i + 1] == '\0')
			return (1);
		if (one[n] == '\0')
			return (0);
		return (wut(one, two, n + 1, i) || wut(one, two, n, i + 1));
	}
	else if (one[n] != two[i])
		return (0);
	else if (one[n] == two[i] && two[i] == '\0')
		return (1);
	return (wut(one, two, n + 1, i + 1));
}

/**
 * wildcmp - compares two strings and returns either 1 or 0.
 * @s1: first string
 * @s2: second string
 * Return: integer
*/
int wildcmp(char *s1, char *s2)
{
	return (wut(s1, s2, 0, 0));
}
