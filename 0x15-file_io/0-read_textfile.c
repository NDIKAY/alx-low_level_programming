#include "main.h"

/**
 *read_textfile - Read text file to STDOUT.
 *@filename: text file being read
 *@letters: number of letters to be read
 *Return: 0 when the function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters);
{	

	char *buffer;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

