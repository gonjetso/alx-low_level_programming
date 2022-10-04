#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function
 * @ac: ac
 * @av: av
 * Return: zero
 */

char *argstostr(int ac, char **av)
{
	char *jam;
	int i, j, x, y;

	if (ac == 0)
		return (NULL);

	for (x = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			x++;
		x++;
	}

	jam = malloc((x + 1) * sizeof(char));

	if (jam == NULL)
	{
		free(jam);
		return (NULL);
	}

	for (i = j = y = 0; y < x; j++, y++)
	{
		if (av[i][j] == '\0')
		{
			jam[y] = '\n';
			i++;
			y++;
			j = 0;
		}
		if (y < x - 1)
			jam[y] = av[i][j];
	}
	jam[y] = '\0';

	return (jam);
}
