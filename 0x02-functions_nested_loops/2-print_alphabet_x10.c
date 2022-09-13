#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: Always zero
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
