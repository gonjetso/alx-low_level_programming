#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argc
 * @argv: argv
 * Description: desc
 * Return: return
 */
int main(int argc, char *argv[])
{
	if (argc == 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		return (0);
	}
}
