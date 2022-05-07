#include "main.h"

/**
 * append_text_to_file - function to append text to file
 * @filename: name of the file
 * @text_content: text to add to file
 *
 * Description: function to append text to file
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY, 0);
		if (fd == -1)
			return (-1);
		else if (fd == 1)
		{
			close(fd);
			return (1);
		}
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == 1)
	{
		n = write(fd, text_content, len);
		if (n != len || n == -1)
		{
			close(fd);
			return (-1);
		} 
		
	else if (fd == -1)
		return (-1);

	close(fd);
	return (1);
}
