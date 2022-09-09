#include <stdio.h>

/**
 * main - start of program
 *
 * Description: printing out numbers of base ten
 *
 * Return: returns zero
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');
	return (0);
}
