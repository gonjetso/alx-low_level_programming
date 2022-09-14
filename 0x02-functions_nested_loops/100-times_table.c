#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n:n is int
 *
 * Return: lastdigit
 */
void print_times_table(int n)

{
	int cat, dog, fly;

	if (n <= 15 && n >= 0)
	{
		for (fly = 0; fly <= n; ++fly)
		{
			_putchar(48);
			for (dog = 1; dog <= n; ++dog)
			{
				_putchar(',');
				_putchar(' ');

				cat = fly * dog;

				if (cat <= 9)
					_putchar(' ');
				if (cat <= 99)
					_putchar(' ');
				if (cat >= 100)
				{
					_putchar((cat / 100) + 48);
					_putchar((cat / 10) % 10 + 48);
				}
				else if (cat <= 99 && cat >= 10)
					_putchar((cat / 10) + 48);
				_putchar((cat % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
