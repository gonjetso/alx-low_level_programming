/**
 * _strlen - return string length
 * @s: int
 * Return: zero
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
