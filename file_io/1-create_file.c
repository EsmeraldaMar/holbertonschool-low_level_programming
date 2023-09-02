#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int file;
	int lwrite;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		lwrite = write(file, text_content, i);
		close(file);
		if (lwrite == -1)
		{
			return (-1);
		}
	}
	close(file);
	return (1);
}
