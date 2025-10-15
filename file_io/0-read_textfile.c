#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: ...
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 * if the file can not be opened or read, return 0
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, j;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	i = read(fd, buffer, letters);
	if (i < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[i] = '\0';
	close(fd);
	j = write(STDOUT_FILENO, buffer, i);
	if (j < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (j);
}
