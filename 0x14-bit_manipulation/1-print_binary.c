#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeros = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			leading_zeros = 0;
			putchar('1');
		}
		else if
			(!leading_zeros)
			{
				putchar('0');
			}
		mask >>= 1;
	}
	if (leading_zeros)
	{
		putchar('0');
	}
}
