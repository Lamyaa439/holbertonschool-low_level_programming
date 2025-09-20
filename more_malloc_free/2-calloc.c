#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: nmemb elements
 * @size: size bytes
 *
 * Return: a pointer to the allocated memory.
 * If malloc fails, then _calloc returns NULL
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size + 1);

	if (arr == NULL)
		return (NULL);

	return (arr);
}
