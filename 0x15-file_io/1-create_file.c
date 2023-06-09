#include "main.h"

/**
 * create_file - File is creates at a given content
 * @filename: Create to name the file name
 * @text_content: The file of content
 * Return: 1 if successful, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_TRUNC);
	if (fd < 0)
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd >= 0)
	{
		for (i = 0; text_content != NULL && *(text_content + i) != '\0'; i++)
		{
			if (write(fd, text_content + i, 1) != 1)
				return (-1);
		}
		close(fd);
	}
	return (1);
}
