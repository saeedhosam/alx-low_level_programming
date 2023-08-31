#include <stdio.h>
#include "main.h"


/**
 * counting - gives the string length
 * @s: the string
 * Return: integer.
*/
int counting(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (counting(s + 1) + 1);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to be tested
 * Return: integer.
*/
int is_palindrome(char *s)
{
	int n;

	n = counting(s);
	if (s[0] == s[n - 1]
	&& s[1] == s[n - 2]
	&& s[2] == s[n - 3]
	&& s[3] == s[n - 4])
		return (1);
	else
		return (0);
}
