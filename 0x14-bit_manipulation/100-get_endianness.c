#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int value = 1;
	unsigned char *ptr = (unsigned char *)&value;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
