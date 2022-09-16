#include <stdio.h>

/**
 * main - main
 * Description: prime factors
 * Return: zero
 */

int main(void)
{
	unsigned long int n, x, factor;

	n = 612852475143;
	x = 2;
	while (n != 0)
	{
		if (n % x != 0)
		{
			x++;
		}
		else
		{
			factor = n;
			n = n / x;
			if (n == 1)
			{
				printf("%lu\n", factor);
				break;
			}
		}
	}
	return (0);
}
