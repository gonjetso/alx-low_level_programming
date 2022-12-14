#include "main.h"
#include <stdio.h>

/**
 * print_array - print
 * @a: int
 * @n: int
 * Description: printing
 * Return: zero
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
