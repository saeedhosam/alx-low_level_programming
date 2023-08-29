#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: first and second numbers' sum
 * @size_r: the buffer size
 * Return: string.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int s1, s2;
	
	for (s1 = 0; n1[s1] != '\0';)
		s1++;
	for (s2 = 0; n2[s2] != '\0';)
		s2++;

	for (; size_r > 0; s1--, s2--, size_r--)
	{
		if (n1[s1] + n2[s2] <= '9')
			r[size_r] = n1[s1] + n2[s2];
		else if (n1[s1] + n2[s2] > '9')
		{
			r[size_r] = n1[s1] + n2[s2] - '9' - '1';
			n1[s1 + 1] += '1';
		}
	}

	return(r);
}
