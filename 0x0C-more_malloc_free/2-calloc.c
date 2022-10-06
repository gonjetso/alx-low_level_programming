#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function
 * @nmemb: nmemb
 * @size: size
 * Return: zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = malloc(nmemb * size);

	if (j == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		j[i] = 0;

	return (j);
}
