#include "main.h"

/**
* read_textfile - reads a text file and prints to standard output
* @filename: variable
* @letters: length
* Return: if filename is NULL return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *oiv;

	if (filename == NULL)
	return (0);

	oiv = malloc(sizeof(char) * letters);
	if (oiv == NULL)
	return (0);

	x = open(filename, O_RDONLY);
	if (x == -1)
	return (0);

	y = read(x, oiv, letters);
	if (y == -1)
	return (0);

	z = write(STDOUT_FILENO, oiv, y);
	if (z == -1)
	return (0);

	free(oiv);
	close(x);
	return (y);
}
