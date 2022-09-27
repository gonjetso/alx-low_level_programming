#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: a
 * @size: size
 * Return: zero
 */

void print_diagsums(int *a, int size)
{
	int i, j, k;

	j = 0;
	k = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			j += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			k += *(a + i);
	}
	printf("%d, %d\n", j, k);
}
