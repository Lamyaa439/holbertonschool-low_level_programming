#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: a pointer to a struct dog
 * @name: pointer
 * @age: float
 * @owner: pointer
 * return: void
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

