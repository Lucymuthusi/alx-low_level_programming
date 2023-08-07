#include "main.h"
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
        char *buf;
        FILE *fp;

        fp = fopen(filename, "r");
        buf = malloc(letters + 1);
        size_t n = fread(buf, 1, letters, fp);

        if (filename == NULL)
                return (0);
        if (fp == NULL)
                return (0);
        if (buf == NULL)
                return (0);
        if (n < letters)
        {
                buf[n] = '\0';
        }
        write(STDOUT_FILENO, buf, n);
        fclose(fp);
        free(buf);
        return (n);
