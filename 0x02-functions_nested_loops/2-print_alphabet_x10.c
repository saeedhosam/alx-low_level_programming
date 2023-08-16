#include "main.h"

/**
 * print_alphabet_x10 - print 10 times lowercased alphabet
 * Return: Always Void.
 */
void print_alphabet_x10(void)
{
    int i;
    int j;

    for (j = 0; j <= 10; j++)
    {
        for (i = 49; i < 75; i++)
            _putchar(i + '0');
        _putchar('\n');
    }
}
