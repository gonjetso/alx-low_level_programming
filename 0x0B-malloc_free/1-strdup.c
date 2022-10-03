#include <stdlib.h>

/**
 * *_strdup - function
 * @str: str
 * Return: zero
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *x;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[j]  != '\0'; j++)
	{
		;
	}

	x = malloc(j * sizeof(*str) + 1);

	if (x == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < j; i++)
		{
			x[i] = str[i];
		}
	}
	return (x);
}
