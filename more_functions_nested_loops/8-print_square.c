#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: he size of the square.
 *
 * Return: void.
 **/

void print_square(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
