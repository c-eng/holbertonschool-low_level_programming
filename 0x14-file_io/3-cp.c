#include "holberton.h"

/**
 * main - copies file contents to another file
 * @argc: number of args
 * @argv: array of string args
 *
 * Return: 0 or something else
 */

int main(int argc, char *argv[])
{
	int fyle4, fyle2, reed = 0, wry, c4, c2;
	char *buff = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}
	fyle4 = open(argv[1], O_RDONLY);
	if (fyle4 == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fyle2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fyle2 == -1)
	{
		free(buff);
		close(fyle4);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	do {
		reed = read(fyle4, buff, 1024);
		wry = write(fyle2, buff, reed);
		if (wry != reed)
		{
			free(buff);
			close(fyle4);
			close(fyle2);
			dprintf(STDERR_FILENO, "Something Happened\n");
			exit(42);
		}
	} while (reed);
	free(buff);
	c4 = close(fyle4);
	c2 = close(fyle2);
	if (c4 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fyle4);
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fyle2);
		exit(100);
	}
	return (0);
}
