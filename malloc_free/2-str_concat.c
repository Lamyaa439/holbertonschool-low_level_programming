#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: first pointer
 * @s2: second pointer
 *
 * Return: pointer, NULL on failure
 **/
char *str_concat(char *s1, char *s2)
{
	int size, size1 = 0, size2 = 0, i = 0;
	char *s3;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	size = size1 + size2;
	s3 = malloc((sizeof(char) * size) + 1);

	if (s3 == NULL)
		return (NULL);

	size2 = 0;

	while (i < size)
	{
		if (i <= size1)
			s3[i] = s1[i];
		if (i >= size1)
		{
			s3[i] = s2[size2];
			size2++;
		}
		i++;
	}
	s3[i] = '\0';

	return (s3);
}
