#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to append to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, text_len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (access(filename, W_OK) == 0 ? 1 : -1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	text_len = 0;
	while (text_content[text_len] != '\0')
		text_len++;

	bytes_written = write(file_descriptor, text_content, text_len);
	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
