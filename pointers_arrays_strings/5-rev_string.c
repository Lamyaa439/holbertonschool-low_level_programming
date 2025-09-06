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
	char *first = s;
	char *end = s;
	char swp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (first < end)
	{
		swp = *first;
		*first = *end;
		*end = swp;

		first++;
		end--;
	}
}
