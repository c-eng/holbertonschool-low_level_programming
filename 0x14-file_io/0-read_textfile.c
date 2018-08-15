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
	char buff[letters];

	if (!filename)
		return (0);

	fi = open(filename, O_RDONLY);

	if (fi == -1)
		return (0);

	reed = read(fi, buff, letters);

	if (reed == -1)
	{
		close(fi);
		return (0);
	}

	wry = write(STDIN_FILENO, buff, reed);

	if (wry != reed)
	{
		close(fi);
		return (0);
	}

	close(fi);
	return (wry);
}
