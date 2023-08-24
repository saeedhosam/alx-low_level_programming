#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string
 * Return: string.
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == 32)
			str[i] = str[i] - 32;
		else if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == 46)
			str[i] = str[i] - 32;
		else if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == 10)
			str[i] = str[i] - 32;
		else if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == 9)
			str[i] = str[i] - 32;
	}
	return (str);
}
