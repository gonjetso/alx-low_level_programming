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
	int letter;
	char alpha[] = "_putchar";

	for (letter = 0; letter < 8; ++letter)
	{
		_putchar(alpha[letter]);
	}
	_putchar('\n');
	return (0);
}
