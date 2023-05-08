#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads text file & prints to POSIX stdout
 *
 * @filename: Name of file to read
 * @letters: Num of letters to read & print
 *
 * Return: Num of letters read & printed else 0 if not open 0r read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_bytes_read, num_bytes_written;
	int fdes;
	char *buf;

	if (!filename)
		return (0);

	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fdes);
		return (0);
	}

	num_bytes_read = read(fdes, buf, letters);
	if (num_bytes_read == -1)
	{
		free(buf);
		close(fdes);
		return (0);
	}

	num_bytes_written = write(STDOUT_FILENO, buf, num_bytes_read);
	if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		free(buf);
		close(fdes);
		return (0);
	}

	free(buf);
	close(fdes);

	return (num_bytes_written);
}
