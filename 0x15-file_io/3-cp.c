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
		dprintf(STDERR_FILENO, "Error: failed to create buffer\n");
		exit(EXIT_FAILURE);
	}
	return (buf);
}
/**
 * close_file - close open file
 * @file: the file to copy from
 *
 * Description: close a file
 *
 * Return: void
 */
void close_file(int file)
{
	int n = close(file);

	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
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
	char *buf;
	int n, m;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file  %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to  %s\n", argv[2]);
		exit(99);
	}
	buf = create_buf(BUFSIZE);
	while ((n = read(file_from, buf, BUFSIZE)) > 0)
	{
		m = write(file_to, buf, n);
		if (n != m || m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
	}
	free(buf);
	close_file(file_from);
	close_file(file_to);
	return (1);
}
