#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: a pointer
 *
 * Return: a pointer to the duplicated string, NULL if str = NULL
 *
 **/
char *_strdup(char *str)
{
	int size = 0, i;
	char *c;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
	{
		size++;
	}

	c = malloc((sizeof(char) * size) + 1);

	if (c == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		c[i] = str[i];
	}

	c[i] = '\0';

	return (c);
	free(c);
}
