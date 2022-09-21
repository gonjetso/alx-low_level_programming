#include "main.h"

/**
 * *string_toupper - toupper
 * @str: pointer
 * Return: zero
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[1] -= 32;
	}
	return (str);
}
