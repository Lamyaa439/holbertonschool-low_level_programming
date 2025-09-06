#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to print it in reverse.
 *
 * Return: void.
 *
 **/

void print_rev(char *s)
{
	int i = 0;
	int len = strlen(s) - 1;
	char c;

	c = s[i];

	for (i = len; i >= 0; i--)
	{
		c = s[i];
		_putchar(c);
	}
	_putchar('\n');
}
