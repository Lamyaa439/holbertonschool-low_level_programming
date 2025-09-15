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
	char *c = malloc(strlen (str) + 1);

	if (c == NULL)
		return (NULL);
	strcpy(c, str);
	return (c);

}
