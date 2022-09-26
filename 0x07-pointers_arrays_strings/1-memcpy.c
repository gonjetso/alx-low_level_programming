#include "main.h"

/**
 * *_memcpy - function
 * @dest: dest
 * @src: src
 * @n: n
 * Return: zero
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
