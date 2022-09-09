#include <stdio.h>

/**
 * main - start of program
 *
 * Description: printing out the alphabet except e and q
 *
 * Return: returns zero
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
			++alpha;
		putchar(alpha);
		++alpha;
	}
	putchar('\n');
	return (0);
}
