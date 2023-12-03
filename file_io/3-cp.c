#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - function name
 * @code: first
 * @message: second
 * Description: something
 * return: something
 */

void print_error_and_exit(int code, const char *message)
{
	dprintf(2, "%s\n", message);
	exit(code);
}

/**
 * copy_file - function name
 * @source_file: first
 * @dest_file: second
 * Description: something
 * Return: something else
 */

void copy_file(const char *source_file, const char *dest_file)
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

fd_from = open(source_file, O_RDONLY);
if (fd_from == -1)
	print_error_and_exit(98, "Error: Can't read from file");
fd_to = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
		| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
	close(fd_from);
	print_error_and_exit(99, "Error: Can't write to file");
}
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
	print_error_and_exit(99, "Error: Can't write to file");
}
if (bytes_read == -1)
	print_error_and_exit(98, "Error: Can't read from file");
if (close(fd_from) == -1 || close(fd_to) == -1)
	print_error_and_exit(100, "Error: Can't close file descriptor");
}

int main(int argc, char *argv[])
{
if (argc != 3)
	print_error_and_exit(97, "Usage: cp file_from file_to");
	copy_file(argv[1], argv[2]);
	return 0;
}
