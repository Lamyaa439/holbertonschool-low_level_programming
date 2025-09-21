#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog -  creates a new dog.
 * @name: pointer
 * @age: float
 * @owner: pointer
 * return: NULL if the function fails
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1 = 0, len2 = 0, i, j;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL)
		return (NULL);
	while (name[len1++])
		;
	while (owner[len2++])
		;
	new_dog->name = malloc(sizeof(new_dog->name) * len1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(new_dog->owner) * len2);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (j = 0; j < len2; j++)
		new_dog->owner[j] = owner[j];

	return (new_dog);

}
