#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: the string
 * Return: string.
*/
char *leet(char *str)
{
	int i, j = 0;
	char car [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num [] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (car[j] == str[i])
				str[i] = num[j];
	return (str);
}
