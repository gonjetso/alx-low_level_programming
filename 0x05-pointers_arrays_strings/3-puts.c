/**
 * _puts - prints a string
 * @str: pointer
 * Return: zero
 */

void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
