#include <stdio.h>

/**
 * main - start of program
 *
 * Description: printing out all characters of the alphabet
 *
 * Return: returns zero
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
