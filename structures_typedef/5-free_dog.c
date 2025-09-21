#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free dog
 * @d: a pointer to a struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
