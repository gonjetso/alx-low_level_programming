#include <stdio.h>

/**
 * main - function
 * @argc: argc
 * @argv: argv
 * Description: desc
 * Return: return
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
