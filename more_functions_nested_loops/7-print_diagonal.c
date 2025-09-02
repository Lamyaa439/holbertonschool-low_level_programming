#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int m, k;

	for (m = 1; m <= n; m++)
	{
		for (k = 1; k <= m; k++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
