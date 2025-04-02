#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i <= j)
			{
				putchar(i / 10 + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
