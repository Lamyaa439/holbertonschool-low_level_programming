#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: int
 * @max: int
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 **/

int *array_range(int min, int max)
{
	int *arr;
	int i ,size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	i = 0;
	while (i < size)
	{
		arr[i] = 0;
		i++;
	}

	if (arr == NULL)
		return (NULL);

	return (arr);

}
