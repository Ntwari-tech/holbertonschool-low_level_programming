#include "main.h"

/**
* append_text_to_file - appends to the end of a created file
* @filename: pointer
* @text_content: pointer 2
* Return: If filename is NULL return -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, bytes_size = 0;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	text_content = "";

	while (text_content[bytes_size])
	{
		bytes_size++;
	}

	x = open(filename, O_RDWR | O_APPEND);
		if (x == -1)
		return (-1);

	y = write(x, text_content, bytes_size);
		if (y == -1)
		return (-1);

	close(x);
	return (1);
}
