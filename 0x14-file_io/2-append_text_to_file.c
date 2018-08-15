#include "holberton.h"

/**
 * append_text_to_file - appends text to file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fyle, wry, len;

	if (!filename)
		return (-1);

	fyle = open(filename, O_APPEND | O_WRONLY);

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
