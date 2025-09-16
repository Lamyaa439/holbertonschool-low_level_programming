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
	int **arr, i, j, k, f;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (f = 0; f < width; f++)
		{
			arr[k][f] = 0;
		}
	}

	return (arr);

}
