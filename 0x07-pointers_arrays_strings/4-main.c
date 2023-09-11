#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *t;

    t = _strpbrk("", "abcdef");
    printf("%s\n", t);
    return (0);
}
