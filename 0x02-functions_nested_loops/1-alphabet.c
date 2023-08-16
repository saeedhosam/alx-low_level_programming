#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	
	for (i = 49; i < 75; i++)
		_putchar(i + '0');
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}


