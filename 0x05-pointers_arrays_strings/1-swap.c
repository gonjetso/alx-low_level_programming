/**
 * swap_int - swap a and b
 * @a: int
 * @b: int
 * Return: zero
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
