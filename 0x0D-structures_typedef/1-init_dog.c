#include "dog.h"

/**
 * init_dog - New dog
 * @d: new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!(d))
		exit (1);
	if (!(name))
		name = "";
	if (!(owner))
		owner = "";
	d->name = name;
	d->age = age;
	d->owner = owner;
}
