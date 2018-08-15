#include "holberton.h"

/**
 * read_textfile - reads, prints from textfile
 * @filename: name of file
 * @letters: number of characters to print
 *
 * Return: number of printed characters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi, reed, wry;
	char *buff;

	if (!filename)
		return (0);

	fi = open(filename, O_RDONLY);

	if (fi == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	reed = read(fi, buff, letters);

	if (reed == -1)
	{
		free(buff);
		close(fi);
		return (0);
	}

	wry = write(STDOUT_FILENO, buff, reed);

	if (wry != reed)
	{
		free(buff);
		close(fi);
		return (0);
	}
	free(buff);
	close(fi);
	return (wry);
}
