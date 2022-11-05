#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to be created
 * @text_content: text to be written
 *
 * Return: 1 success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, swrite, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i] != '\0')
			i++;
		swrite = write(file, text_content, i);
		if (swrite == -1)
			return (-1);
	}

	close(file);
	return (1);
}
