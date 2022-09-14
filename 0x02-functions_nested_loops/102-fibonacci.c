#include <stdio.h>

/**
 * main - main
 *
 * Description: fibonacci
 *
 * Return: 0
 */
int main(void)
{
	long int z;
	long int x = 1, y = 2;
	int counter = 2;

	printf("%lu, ", x);
	while (counter <= 50)
	{
		if (counter == 50)
		{
			printf("%lu\n", y);
		}
		else
		{
			printf("%lu, ", y);
		}

		z = y;
		y += x;
		x = z;
		counter++;
	}
	return (0);
}
