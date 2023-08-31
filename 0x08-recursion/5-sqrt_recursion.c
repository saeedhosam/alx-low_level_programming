#include <stdio.h>
#include "main.h"

/**
 * sqrt_incrementer - function for _sqrt_recursion
 * @po: number to be squared rooted
 * @sq: possible square root
 * Return: integer
*/
int sqrt_incrementer(int po, int sq)
{
	if (sq * sq == po)
		return (sq);
	if (sq * sq > po)
		return (-1);
	return (sqrt_incrementer(po, sq + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to be squared roooooted
 * Return: integer
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_incrementer(n, 1));
}
