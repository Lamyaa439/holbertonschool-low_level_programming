#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 0 if the string equll
 * diff otherwise.
 *
 **/
int _strcmp(char *s1, char *s2)
{
	int i; 

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}

	return (s1[i] - s2[i]);
}
