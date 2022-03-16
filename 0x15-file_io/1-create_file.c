#include "main.h"
/**
* create_file - creates a file
* @filename: file name
* @text_content: this is  null file
* Return: success return 1, fail 0
*/

int create_file(const char *filename, char *text_content)
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

	x = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (x == -1)
		return (-1);

	y = write(x, text_content, bytes_size);
	if (y == -1)
		return (-1);

	close(x);
	return (1);
}
