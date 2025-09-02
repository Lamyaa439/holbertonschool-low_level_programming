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

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (m = 0; m < n; m++)
	{
		for (k = 0; k < m; k++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
