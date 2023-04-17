#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * intit_dog - intialize function
 * @d: pointer to struct dog
 * @name: first element
 * @age: second element
 * @owner: third element
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
