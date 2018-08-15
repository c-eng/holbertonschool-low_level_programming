#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fyle, len, wry;

	if (!filename)
		return (-1);
	fyle = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fyle == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0 ; text_content[len] != '\0' ; len++)
			;
		wry = write(fyle, text_content, len);
		if (len != wry)
		{
			close(fyle);
			return (-1);
		}
	}

	close(fyle);
	return (1);
}
