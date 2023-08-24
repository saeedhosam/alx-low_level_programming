#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @str: the string
 * Return: string.
*/
char *rot13(char *str)
{
	int i, j = 0;
	char car[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; car[j] != '\0'; j++)
			if (car[j] == str[i])
			{
				str[i] = num[j];
				break;
			}
	return (str);
}
