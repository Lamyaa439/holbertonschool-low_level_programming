#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: is the name of the file, If filename is NULL return -1.
 * Do not create the file if it does not exist
 * @text_content: is the NULL terminated string to add at the end of
 * the file, If text_content is NULL, do not add anything to the file.
 * Return: 1 on success and -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, j = 0, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	while (text_content && text_content[len])
		len++;
	j = write(fd, text_content, len);
	if (j < 0)
		return (-1);

	close(fd);
	return (1);
}
