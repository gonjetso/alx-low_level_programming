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
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');

	return (0);
}
