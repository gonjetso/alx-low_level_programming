#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet: print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
