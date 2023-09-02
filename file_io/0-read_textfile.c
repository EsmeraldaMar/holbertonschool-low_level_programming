#include "main.h"

/**
 * read_textfile - read text and print it
 * @filename: name of file
 * @letters: number of letters
 *
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int lread;
	int lwrite;
	char *text;

	text = malloc(sizeof(char) * (letters + 1));
	if (filename == NULL || text == NULL)
	{
		free(text);
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	lread = read(file, text, letters);
	if (lread == -1)
		return (0);
	text[lread] = '\0';
	lwrite = write(STDOUT_FILENO, text, lread);
	if (lwrite != lread)
		return (0);
	free(text);
	close(file);
	return (lread);
}
