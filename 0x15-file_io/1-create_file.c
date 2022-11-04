#include "main.h"

/**
 * read_textfile - function
 * @filename: filename
 * @letters: letters
 * Return: zero
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int f;
	char *c;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	c = malloc(sizeof(char) * (letters));
	if (!c)
		return (0);

	rd = read(f, c, letters);
	wr = write(STDOUT_FILENO, c, rd);

	close(f);
	free(c);

	return (wr);
}
