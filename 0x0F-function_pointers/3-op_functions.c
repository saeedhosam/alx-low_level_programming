#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: integer.
*/
int op_add(int a, int b)
{
	int res = a + b;

	return (res);
}

/**
 * op_sub - substracts two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: integer.
*/
int op_sub(int a, int b)
{
	int res = a - b;

	return (res);
}

/**
 * op_mul - multiplies two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: integer.
*/
int op_mul(int a, int b)
{
	int res = a * b;

	return (res);
}

/**
 * op_div - divides two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: integer.
*/
int op_div(int a, int b)
{
	int res = a / b;

	return (res);
}

/**
 * op_mod - modulates two numbers
 *
 * @a: number 1
 * @b: number 2
 *
 * Return: integer.
*/
int op_mod(int a, int b)
{
	int res = a % b;

	return (res);
}
