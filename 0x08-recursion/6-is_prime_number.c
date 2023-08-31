#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - returns 1 for prime number & otherwise return 0
 * @n: the number to be tested
 * Return: integer.
*/
int is_prime_number(int n)
{
	if (n <= 1
	|| n % 2 == 0
	|| n % 3 == 0
	|| n % 4 == 0
	|| n % 5 == 0
	|| n % 6 == 0
	|| n % 7 == 0
	|| n % 8 == 0
	|| n % 9 == 0)
		return (0);
	return (1);
}
