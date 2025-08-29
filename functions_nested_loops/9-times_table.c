#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*
* Return: void
*/

void times_table(void)
{
	int n, i, j;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			_putchar(',');
			_putchar(' ');
			j = n * i;
			if (j <= 9)
				_putchar(' ');
			else
				_putchar ('0' + (j / 10));
			_putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
