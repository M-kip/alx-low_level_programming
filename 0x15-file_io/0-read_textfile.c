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
	char *buf;
	ssize_t n, m;

	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);
	m = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, m);
	if (n != m || n == -1)
		return (0);

	return (n);
}
