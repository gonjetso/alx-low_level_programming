#include "main.h"

/**
 * main - main code
 *
 * print_alphabet - print alphabet
 *
 * Return: Always zero
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
