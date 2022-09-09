#include <stdio.h>

/**
 * main - start of program
 *
 * Description: numbers of base16
 *
 * Return: returns zero
 */

int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);

		if (num == 57)
			num += 39;
		++num;
	}
	putchar('\n');

	return (0);
}
