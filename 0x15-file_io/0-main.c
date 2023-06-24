#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buf = malloc(letters + 1);
        FILE *fp = fopen(filename, "r");
        size_t n = fread(buf, 1, letters, fp);

        if (filename == NULL || fp == NULL)
                return (0);
        if (n < letters)
        {
                buf[n] = '\0';
        }
        write(STDOUT_FILENO, buf, n);
        fclose(fp);
        free(buf);
        return (n);
}
