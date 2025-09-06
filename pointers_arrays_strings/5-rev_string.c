#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: the string to reverse
 *
 * Return: void
 *
 **/

void rev_string(char *s)
{
	int len = 0;
	int c;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (c = len; c > 0; c--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
