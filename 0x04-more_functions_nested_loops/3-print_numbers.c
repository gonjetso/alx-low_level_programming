/**
 * print_numbers - print numbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a);
		a++;
	} while (a >= 0 && a <= 9);
	_putchar('\n');
}
