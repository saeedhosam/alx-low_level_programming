#include "main.h"

/**
 * times_table - prints that 9 times table, starting with 0.
 * Return: Void.
 */
void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
  {
		for (j = 0; j <= 9; j++)
		{
	  if ((i * j) >= 10)
	  {
		l = i * j;
		while (l >= 10)
		  l = l / 10;
		_putchar(l + '0');
		k = (i * j) % 10;
		_putchar(k + '0');
		if (j == 9)
		  continue;
		_putchar(',');
		_putchar(' ');
		continue;
	  }
			_putchar((i * j) + '0');
	  if (j == 9)
		continue;
	  _putchar(',');
	  _putchar(' ');
	  _putchar(' ');
		}
		_putchar('\n');
  }
}
