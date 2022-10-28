#include "main.h"

/**
 * set_bit - function
 * @n: int
 * @index: index
 * Return: zero
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
