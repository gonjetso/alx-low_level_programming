#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * @min: min
 * @max: max
 * Return: zero
 */

int *array_range(int min, int max)
{
	int i, j;

	if (min > max)
		return (NULL);

	j = malloc(sizeof(*j) * ((max - min) + 1));

	if (j == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
	{
		j[i] = min;
	}

	return (j);
}
