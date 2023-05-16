#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fb, i, c;

	if (filename == NULL)
		return (-1);

	fb = open(filename, O_WRONLY | O_APPEND);
	if (fb == -1)
		return (-1);

	if (text_content)
	{
		i = 0;
		for (i = 0; text_content[i]; i++)
			;

		c = write(fb, text_content, i);

		if (c == -1)
		{
			return (-1);
		}
	}

	close(fb);
	return (1);
}
