#include "main.h"

/**
 * int _strcmp - compare strings
 * @s1: string
 * @s2: string
 * Return: zero
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
}
