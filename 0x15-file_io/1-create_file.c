#include "main.h"

/**
 * create_file - function
 * @filename: filename
 * @text_content: content
 * Return: zero
 */
int create_file(const char *filename, char *text_content)
{
	int j, letters, rite;

	if (!filename)
		return (-1);

	j = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (j == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	rite = write(j, text_content, letters);

	if (rite == -1)
		return (-1);

	close(j);
	return (1);
}
