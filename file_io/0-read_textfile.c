#include "main.h"

/*
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: if success return number of letter, else return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *baff;
	int x, i, w;

	baff = malloc(letters);
	if (baff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	i = read(x, baff, letters);
	if (i == -1)
		return (0);
	w = write(STDOUT_FILENO, baff, i);
	if (w == -1)
		return (0);
	if(close(x) == -1)
		return (0);
	free(baff);
	return (i);
}
