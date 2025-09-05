#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: a string.
 *
 * Return: c the length.
*/

int _strlen(char *s)
{
	int c;

	while (*s++)
		c++;
	return (c);
}
