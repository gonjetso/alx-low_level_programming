#include "main.h"

/**
 * binary_to_uint - function
 * @b: binary.
 * Return: zero
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int b2, length;

	if (!b)
		return (0);

	uint = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, b2 = 1; length >= 0; length--, b2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			uint += b2;
		}
	}

	return (uint);
}
