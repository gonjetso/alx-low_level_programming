#include <stdio.h>
#include "dog.h"

/**
 * free_dog - function
 * @d: d
 * Return: zero
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
