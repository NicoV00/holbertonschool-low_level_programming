#include "main.h"

/*
 * main- entry point
 * @argv: arguments
 * @argc: arguments
 * Return: value
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t oread, owrite;
	char buf[1024];

	 if (argc != 3)
	 {
		 dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		 exit(97);
	 }

	 file_from = open(argv[1], O_RDONLY);
	 if (file_from == -1)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		 exit(98);
	 }

	 file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	 if (file_to == -1)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		 exit(99);
	 }

	 while ((oread = read(file_from, buf, 1024)) > 0)
	 {
		 owrite = write(file_to, buf, oread);
		 if (owrite == -1)
		 {
			 dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			 exit(99);
		 }
	 }

	 if (oread == -1)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		 exit(98);
	 }

	 if (close(file_from) == -1)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_from);
		 exit(100);
	 }

	 if (close(file_to) == -1)
	 {
		 dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_to);
		 exit(100);
	 }

	 return (0);
}
