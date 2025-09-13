#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: pointer
 * @c: char
 *
 * Return: a pointer to the first occurrence of
 * the character c in s, NULL if c not found.
 **/

char *_strchr(char *s, char c)
{

	while (s[0] != '\0')
	{
		if (s[0] == c)
			return (s);
		else if (s[1] == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
