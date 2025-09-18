#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: a pointer
 * @s2: a pointer
 * @n: unsigned int
 *
 * Return: point to a newly allocated space in memory
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int size_1 = 0, size_2 = 0, size, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size_1] != '\0')
		size_1++;
	while (s2[size_2] != '\0')
		size_2++;
	size = size_1 + n;
	str = malloc((sizeof(char) * size) + 1);

	if (str == NULL)
		return (NULL);

	size_2 = 0;

	while (i < size)
	{
		if (i <= size_1)
			str[i] = s1[i];
		if (i >= size_1)
		{
			str[i] = s2[size_2];
			size_2++;
		}
		i++;
	}
	str[i] = '\0';

	return (str);

}
