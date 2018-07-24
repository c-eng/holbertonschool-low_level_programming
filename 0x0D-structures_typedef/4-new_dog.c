#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a pupper
 * @name: Pupper name
 * @age: Pupper age
 * @owner: Pupper owner
 *
 * Return: pointer or null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pupper = malloc(sizeof(*pupper));
	int i;

	if (pupper)
	{
		pupper->name = malloc(sizeof(name));
		if (pupper->name)
		{
			for (i = 0 ; name[i] != '\0' ; i++)
			{
				pupper->name[i] = name[i];
			}
			pupper->name[i] = '\0';
		}
		else
			return (NULL);
		pupper->age = age;
		pupper->owner = malloc(sizeof(owner));
		if (pupper->owner)
		{
			for (i = 0 ; owner[i] != '\0' ; i++)
			{
				pupper->owner[i] = owner[i];
			}
			pupper->owner[i] = '\0';
		}
		else
			return (NULL);
	}
	return (pupper);
}
