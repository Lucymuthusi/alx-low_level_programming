#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of file to be opened and read.
 * @letters: The characters to be read.
 * Return: Total bytes read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buffer = (char *)malloc(letters * sizeof(char));
	size_t bytesRead = fread(buffer, sizeof(char), letters, file);
	size_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (file == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	if (buffer == NULL)
		return (0);

	if (bytesRead == 0)
	{
		free(buffer);
		return (0);
	}

	if (bytesWritten != bytesRead)
	{
		free(buffer);
		return (0);
	}
	fclose(file);
	free(buffer);
	return (bytesRead);
}
