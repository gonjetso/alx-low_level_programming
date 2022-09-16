/**
 * print_most_numbers - print some numbers from 0 to 9
 * Return: 0
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}

	_putchar('\n');
}
