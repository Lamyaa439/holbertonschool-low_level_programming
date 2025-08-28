#include <unistd.h>
#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int c, n;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
