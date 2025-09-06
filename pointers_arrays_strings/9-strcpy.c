#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: the input array.
 * @src: the string to be copy.
 *
 * Return: the pointer to dest.
 **/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
		i++;
	return (src);
}
