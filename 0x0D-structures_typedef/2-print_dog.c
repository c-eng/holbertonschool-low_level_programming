#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a dog
 * @d: Dog to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		printf("%s\n", (*d).name);
		printf("Age: ");
		if ((*d).age)
			printf("\n");
		else
			printf("%.6f\n", ((*d).age));
		printf("Owner: ");
		printf("%s\n", (*d).owner);
	}
}
