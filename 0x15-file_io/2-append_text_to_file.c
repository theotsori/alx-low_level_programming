#include "main.h"

/**
 * append_text_to_file - function that appends text at the end
 * of a file
 * @filename: name of file
 * @text_content: strings to be written
 *
 * Return: 1 success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, j = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[j] != '\0')
			j++;

		i = write(file, text_content, j);
		if (i == -1)
			return (-1);
	}
	close(file);
	return (1);
}
