#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	if (a > b && b > c)
		return (a);
	else if (a > b && c > b)
		return (a);
	else if (a > c && c > b)
		return (a);
	else if (a > c && b > c)
		return (a);
	else if (b > a && a > c)
		return (b);
	else if (b > a && c > a)
		return (b);
	else if (b > c && c > a)
		return (b);
	else if (b > c && a > c)
		return (b);
	else
		return (c);
}
