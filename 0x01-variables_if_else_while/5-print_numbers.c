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
	int num;

	for (num = 0; num < 10; ++num)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
