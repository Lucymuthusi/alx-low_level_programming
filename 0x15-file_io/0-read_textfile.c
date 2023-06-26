#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_letters_read = 0;
	char letter;
	FILE *fp = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (fp == NULL)
		return (0);
	while (num_letters_read < (ssize_t)letters && (letter = fgetc(fp)) != EOF)
	{
		write(STDOUT_FILENO, &letter, 1);
		num_letters_read++;
	}
	fclose(fp);
	return (num_letters_read);
}
