#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: zero
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str1, str2, strword, i;
	char *word;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (str1 = 0; s1[str1] != '\0'; str1++)
		;

	for (str2 = 0; s2[str2] != '\0'; str2++)
		;

	if (n > str2)
		n = str2;

	strword = str1 + n;

	word = malloc(strword + 1);

	if (word == NULL)
		return (NULL);

	for (i = 0; i < strword; i++)
		if (i < str1)
			word[i] = s1[i];
		else
			word[i] = s2[i - ls1];

	word[i] = '\0';

	return (word);
}
