#include "main.h"
#include <string.h>

/*
 * append_text_to_file - appends text at the end of a file
 * @filename: name
 * @text_content: text
 * Return: int value
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x;

	x = open(filename, O_RDWR | O_APPEND);

	if (x == -1)
		return (-1);

	if (filename == NULL)
		return (-1);
	if (text_content)
		write(x, text_content, strlen(text_content));
	close(x);
	return (1);
}
