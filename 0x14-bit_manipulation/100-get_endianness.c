#include "main.h"

/**
 * get_endianness - function
 * Return: zero
 */
int get_endianness(void)
{
	char *c;
	unsigned int i;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
