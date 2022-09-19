#include "main.h"

/**
 * rev_string - rev string
 * @s: pointer
 * Return: zero
 */

void rev_string(char *s)
{
	int i, str, mid;
	char word;

	for (str = 0; s[str] != '\0'; str++)
		;

	i = 0;
	mid = str / 2;

	while (mid--)
	{
		word = s[str - i - 1];
		s[str - i - 1] = s[i];
		s[i] = word;
		i++;
	}
}
