#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of program
 *
 * Description: checking the last digit
 *
 * Return: returns zero
 */

int main(void)
{
	int n, lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;
	if (lastDig > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDig);
	}
	else if (lastDig == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDig);
	}
	else if (lastDig < 6 && lastDig != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDig);
	}
	return (0);
}
