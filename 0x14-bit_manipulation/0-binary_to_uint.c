#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - function to convert a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;

	if (b == NULL)
			{
				return (0);
			}
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		n = 2 * n + (b[i] - '0');
	}

	return (n);
}
