#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string to print.
 *
 * Return: void
 *
 **/

void puts2(char *str)
{
	int i;
	int len = 0;
	char *start = str;

	while (*start != '\0')
	{
		len++;
		start++;
	}
	start = str;
	for (i = 0; i < len; i += 2)
	{
		_putchar(*start);
		start += 2;
	}
	_putchar('\n');
}
