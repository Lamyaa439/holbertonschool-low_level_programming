#include "main.h"

/**
 * print_diagonal - Write a function that.
 * @n: the number of times the character \ should be printed.
 *
 * Reaturn: void
 *
 */

void print_diagonal(int n)
{
	int m, k;

	for (m = 1; m <= n; m++)
	{
		for (k = 0; k <= m; k++)
		{
			if (k == m)
				_putchar('\\');
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
