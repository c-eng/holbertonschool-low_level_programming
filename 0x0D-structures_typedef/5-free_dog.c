#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Freedom
 * @d: Dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
