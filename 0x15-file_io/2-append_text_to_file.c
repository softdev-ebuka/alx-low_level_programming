#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes, num_bytes_written, tot_bytes_written = 0;

	if (!filename)
		return (-1);

	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[tot_bytes_written])
			tot_bytes_written++;

		num_bytes_written = write(fdes, text_content, tot_bytes_written);
		if (num_bytes_written != tot_bytes_written)
		{
			close(fdes);
			return (-1);
		}
	}

	close(fdes);
	return (1);
}
