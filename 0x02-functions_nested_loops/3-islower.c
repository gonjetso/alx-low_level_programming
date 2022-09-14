#include "main.h"

/**
 * _islower - check lowercase
 *
 * @c: input
 *
 * Return: Always zero or one
 */
void print_alphabet_x10(void)
{
	int alphacount = 0;

	while (alphacount < 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		alphacount++;
		_putchar('\n');
	}
}
