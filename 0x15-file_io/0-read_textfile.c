#include <stdio.h>
#include "main.h"

/**
 * read_textfile - read text file and print to std output
 * @filename: name of the file
 * @letters: number of letters to print
 *
 * Description: function that reads a text file and prints
 * to std output
 * Return: int number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nm = 0;
	static char buf[BUFSIZE];
	int n;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);
	while ((n = read(fd, buf, letters)) > 0)
	{
		n = write(STDOUT_FILENO, buf, letters);
		if (n != (int) letters || n == -1)
			return (0);
		nm += n;
	}

	return (nm);
}
