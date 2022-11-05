#include "main.h"

/**
 * read_textfile - function that reads and prints
 * a text file
 * @filename: text file to be read
 * @letters: in file text
 *
 * Return: number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rcheck, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rcheck = read(file, buffer, letters);
	if (rcheck == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcheck);
	if (wcount == -1 || rcheck != wcount)
		return (0);

	free(buffer);
	close(file);

	return (wcount);
}
