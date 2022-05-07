#include "main.h"

/**
 * create_file - create and populate a file
 * @filename: name of the file
 * @text_content: text to write to file
 *
 * Description: function to create and empty file
 * and write text content to it
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

	int fd;
	int n;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = creat(filename, PERMS);
		if (fd == -1)
			return (-1);
	}
	else if (text_content != NULL)
	{
		fd = creat(filename, PERMS);
		if (fd == -1)
			return (-1);
		n = write(fd, text_content, _strlen(text_content));
		if (n != (int) _strlen(text_content) || n == -1)
			return (-1);
	}

	return (1);
}
