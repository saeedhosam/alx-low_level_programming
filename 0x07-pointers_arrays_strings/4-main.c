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

    t = _strpbrk("First, solve the problem. Then, write the code.", "");
    printf("%s\n", t);
    return (0);
}
