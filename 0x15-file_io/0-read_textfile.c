#include"main.h"
/**
 * read_textfile - reads from another file
 * @filename: the name of the file to be read from
 * @letters: the number of letters int the file
 * Return: count of the write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdr, fdw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char)*letters);
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}
	fdr = read(fd, buffer, letters);
	close(fd);
	if (fdr == -1)
	{
		free(buffer);
		return (0);
	}
	fdw = write(STDOUT_FILENO, buffer, fdr);
	free(buffer);
	if (fdr != fdw)
	{
		return (0);
	}
	return (fdw);
}
