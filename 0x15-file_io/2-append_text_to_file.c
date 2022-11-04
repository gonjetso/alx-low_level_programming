#include "main.h"

/**
 * append_text_to_file - function
 * @filename: filename
 * @text_content: text content
 * Return: zero
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, letters, rite;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rite = write(i, text_content, letters);

		if (rite == -1)
			return (-1);
	}

	close(i);
	return (1);
}

