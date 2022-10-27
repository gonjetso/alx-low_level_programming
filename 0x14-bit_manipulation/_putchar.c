#include <unistd.h>

/**
 * _putchar - character printing
 * @c: character
 * Return: zero
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
