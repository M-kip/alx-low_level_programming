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
	char *buf;
	int n, m, file_from, file_to;

	if (argc != 3)
	{
		dprintf(2, "usage: %s file_from file_to", argv[0]);
		exit(EXIT_FAILURE);
	}
	buf = create_buf(BUFSIZE);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error:cannot read from file  %s", argv[1]);
		exit(97);
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
	while ((n = read(file_from, buf, BUFSIZE)) > 0)
	{
		m = write(file_to, buf, n);
		if (m != n || m == -1)
		{
			dprintf(2, "Error: cannot write to file %s\n", argv[2]);
			return (98);
		}
	}

	close(file_from);
	close(file_to);
	return (1);
}
