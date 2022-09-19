#include "main.h"

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
		puts(str[i]);
		i++;
	}
	puts('\n');
}
