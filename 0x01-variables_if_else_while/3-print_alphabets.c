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
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; ++lower)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; ++upper)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
