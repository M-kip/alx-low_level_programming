#include "main.h"
#define BUFSIZE 1024
/**
 * create_buf - create a char buffer
 * @size: size of the buffer
 *
 * Description: create a character buffer
 *
 * Return: char pointer
 */
char *create_buf(int size)
{
	char *buf;

	buf = malloc(size * sizeof(char));
	if (!buf)
	{
		dprintf(2, "failed to create buffer");
		exit(EXIT_FAILURE);
	}
	return (buf);
}
/**
 * _cp - copy file 1 to file 2
 * @file_from: the file to copy from
 * @file_to: destination file
 *
 * Description: copies contents of file 1
 * to file 2
 *
 * Return: void
 */
void _cp(int file_from, int file_to)
{
	char *buf;
	int n;

	buf = create_buf(BUFSIZE);
	while ((n = read(file_from, buf, BUFSIZE)) > 0)
		write(file_to, buf, n);
}
/**
 * main - function to copy content from one file to another
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Description: the function copies contents of one file
 * to another
 *
 * Return: Always 1
 */
int main(int argc, char **argv)
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(2, "usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error:cannot read from file  %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY);
	if (file_to == -1)
	{
		file_to = creat(argv[2], 0664);
		if (file_to == -1)
		{
			dprintf(2, "cannot write to file %s\n", argv[2]);
			exit(99);
		}
	}
	_cp(file_from, file_to);
	if (close(file_from))
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to))
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (1);
}
