#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: unsigned int.
 * @c: char
 * Return: a pointer to the array, and NULL if size = 0
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[i] = '\0';
	return (str);
}
