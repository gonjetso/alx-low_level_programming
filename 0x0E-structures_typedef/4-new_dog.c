#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function
 * @name: dog
 * @age: age
 * @owner: owner
 * Return: zero
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, newname, newowner;
	dog_t *dogpointer;

	dogpointer = malloc(sizeof(*dogpointer));
	if (dogpointer == NULL || !(name) || !(owner))
	{
		free(dogpointer);
		return (NULL);
	}

	for (newname = 0; name[newname]; newname++)
		;

	for (newowner = 0; owner[newowner]; newowner++)
		;

	dogpointer->name = malloc(newname + 1);
	dogpointer->owner = malloc(newowner + 1);

	if (!(dogpointer->name) || !(dogpointer->owner))
	{
		free(dogpointer->owner);
		free(dogpointer->name);
		free(dogpointer);
		return (NULL);
	}

	for (i = 0; i < newname; i++)
		dogpointer->name[i] = name[i];
	dogpointer->name[i] = '\0';

	dogpointer->age = age;

	for (i = 0; i < newowner; i++)
		dogpointer->owner[i] = owner[i];
	dogpointer->owner[i] = '\0';

	return (dogpointer);
}
