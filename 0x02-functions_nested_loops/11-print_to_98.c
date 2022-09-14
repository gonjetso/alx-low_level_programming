#include "main.h"

/**
 * print_last_digit - last digit
 *
 * @n:n is int
 *
 * Return: lastdig
 */
int print_last_digit(int n)
{
	int lastdig;

	if (n < 0)
	{
		lastdig = -1 * (n % 10);
		_putchar(lastdig + '0');
		return (lastdig);
	}
	else
	{
		lastdig = n % 10;
		_putchar(lastdig + '0');
		return (lastdig);
	}
}
