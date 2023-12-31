#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_file - name
 * @filename: first
 * @text_content: second
 * Description: something
 * Return: something
 */

int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t write_result;

if (filename == NULL)
	return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
	return (-1);
if (text_content != NULL)
{
	write_result = write(fd, text_content, strlen(text_content));
	if (write_result == -1)
		{
		close(fd);
		return (-1);
		}
}
close(fd);
return (1);
}
