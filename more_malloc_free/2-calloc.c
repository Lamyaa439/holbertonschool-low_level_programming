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
	char *arr;
	unsigned int total_of_size;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_of_size = nmemb * size;
	arr = malloc(total_of_size);

	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < total_of_size)
	{
		arr[i] = 0;
		i++;
	}

	return (arr);
	free(arr);
}
