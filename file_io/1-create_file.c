#include "main.h"

/*
 * create_file - creates a file
 * @filename: name of file to grab
 * @text_content: content to add
 * Return: int value
 */

int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (0);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file == -1)
		return (-1);

	while (text_content && text_content[len])
	{
		len++;
	}
	len = write(file, text_content, len);
	close(file);
	return (1);
}

