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
		exit(99);
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
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	char *buf;
	int n, m;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
		file_to = open(argv[2], O_WRONLY | O_CREAT, 0664);
	buf = create_buf(BUFSIZE);
	n = read(file_from, buf, BUFSIZE);
	do {
		if (file_from == -1 || n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		m = write(file_to, buf, n);
		if (file_to == -1 || m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
	} while ((n = read(file_from, buf, BUFSIZE)) > 0);
	free(buf);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
