#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: string.
 * @src: string.
 * @n: number of char to copy.
 * Return: dest.
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
		src[i] = dest[len + i];
	}
	return (dest);
}
