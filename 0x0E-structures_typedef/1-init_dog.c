#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * init_dog - intialize function
 * @d: pointer to struct dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
