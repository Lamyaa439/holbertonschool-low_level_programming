#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 *
 * Return: void.
 **/

void print_triangle(int size)
{
	int n, m, i;

	for (n = size; n > 0; n--)
	{
		for (m = n - 1; m > 0; m--)
		{
			_putchar(' ');
		}

		for (i = n - 1; i < size ; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
