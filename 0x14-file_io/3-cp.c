#include "holberton.h"
#define BUFFSIZE 1024

/**
 * main - copies file contents to another file
 * @argc: number of args
 * @argv: array of string args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fyle4, fyle2, reed = 0, wry, c4, c2;
	char buff[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	fyle4 = open(argv[1], O_RDONLY);

	if (fyle4 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fyle2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fyle2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		if (reed)
		{
			wry = write(fyle2, buff, reed);
			if (wry != reed)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
		reed = read(fyle4, buff, BUFFSIZE);
		if (reed == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

	} while (reed);
	c4 = close(fyle4);
	if (c4 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fyle4);
		exit(100);
	}
	c2 = close(fyle2);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fyle2);
		exit(100);
	}
	return (0);
}
