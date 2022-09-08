#include<stdio.h>

/**
 * main - this is where the program starts
 *
 * Description: printing statements according to Task Eight
 *
 * Return: ending the program
 */

int main(void)
{
	char Myst[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, Myst, 59);
	return (1);
}
