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

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}
	return (0);
}
