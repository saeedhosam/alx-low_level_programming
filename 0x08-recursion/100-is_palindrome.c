#include <stdio.h>
#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to be tested
 * Return: integer.
*/
int is_palindrome(char *s)
{
	char str[100];
	
    if (s[0] == '\0')
        return (0);
    else
        return (is_palindrome(s + 1) + 1);
}
