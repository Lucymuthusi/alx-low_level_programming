#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}
	char buffer[letters + 1];
	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);

	if (bytesRead < 0)
	{
		fclose(file);
		return (0);
	}
	buffer[bytesRead] = '\0';
	fclose(file);
	ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);

	if (bytesWritten < 0 || bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesRead);
}
