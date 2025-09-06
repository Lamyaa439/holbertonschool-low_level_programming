#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to print half.
 *
 * Return: void.
 *
 **/

void puts_half(char *str)
{
	int n, i;
	int len = 0;
	char *start = str;

	while (*start != '\0')
	{
		len++;
		start++;
	}
	start = str;
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(start[i]);
		}
	}
	else
	{
		for (n = (len + 1) / 2; n < len; n++)
		{
			_putchar(start[n]);
		}
	}
	_putchar('\n');

}
