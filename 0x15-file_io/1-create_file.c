#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file
 *
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdes, len = 0, num_bytes_written;

	if (!filename)
		return (-1);

	fdes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdes == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		num_bytes_written = write(fdes, text_content, len);
		if (num_bytes_written == -1 || num_bytes_written != len)
			return (-1);
	}

	close(fdes);
	return (1);
}
