#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 *
 * Return: returns a pointer to a 2 dimensional array of integers
 * If width or height is 0 or negative, return NULL
 **/
int **alloc_grid(int width, int height)
{
	int **arr, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
	}

	return (arr);

}
