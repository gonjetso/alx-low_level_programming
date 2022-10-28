#include "main.h"

/**
 * flip_bits - function
 * @n: n
 * @m: m
 * Return: zero
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}

	return (num);
}
