#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int file;
	int lwrite;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
