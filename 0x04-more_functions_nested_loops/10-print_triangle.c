#include "main.h"

/**
 * print_triangle - print triangle
 * Description: print triangle
 * @size: size
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		if (i != (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
