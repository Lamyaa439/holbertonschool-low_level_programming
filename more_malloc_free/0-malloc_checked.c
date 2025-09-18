#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc. 
 * @b: unsigned int.
 *
 * Return: a pointer to the allocated memory
 *
 **/

void *malloc_checked(unsigned int b)
{
	void *arr = malloc(b);
	
	if (arr == NULL)
	{
		printf("An error occurred while determining the access rights of a file\n");
		exit(0);
	}
	return (arr);
}
