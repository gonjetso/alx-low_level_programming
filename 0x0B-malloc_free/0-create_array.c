#include <stdlib.h>

/**
 * *create_array - function
 * @size: size
 * @c: c
 * Return: zero
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
		return (0);
	}
	while (size--)
	{
		x[size] = c;
	}

	return (x);
}
