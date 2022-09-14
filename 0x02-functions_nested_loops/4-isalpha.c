#include "main.h"

/**
 * _isalpha - check alphabet character
 *
 * @c: input
 *
 * Description: checking alphabest character
 *
 * Return: Always zero or one
 */
int _isalpha(int c)
{
	char c;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
