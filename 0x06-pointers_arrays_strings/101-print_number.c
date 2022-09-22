#include "main.h"

/**
 * print_number - leet
 * @n: integer
 * Return: zero
 */

void print_number(int n)
{
	int i, j, k;
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	for (j = 0; n / i > 9; j++, i *= 10)
		;

	for (; i >= 1; n %= i, i /= 10)
	{
		k = n / i;
		_putchar('0' + k);
	}
}
