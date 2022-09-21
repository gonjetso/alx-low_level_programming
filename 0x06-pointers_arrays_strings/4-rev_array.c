#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: integer
 * @n: integer
 * Return: zero
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;

	for (j = n / 2; j > 0; j--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
