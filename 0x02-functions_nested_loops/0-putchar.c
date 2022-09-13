#include "main.h"

/**
 * main - start of program
 *
 * Description: print putchar
 *
 * Return: returns zero
 */

int main(void)
{
	int alpha;
	char word[] = "_putchar";

	for (alpha = 0; alpha < 8; ++alpha)
		_putchar(word[alpha]);

	_putchar('\n');
	return (0);
}
