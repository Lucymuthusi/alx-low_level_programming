#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *_malloc_checked - writes a function to allocate memory using malloc
 *@b: number of bytes to allocate
 *Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}
	return (ptr);
}
