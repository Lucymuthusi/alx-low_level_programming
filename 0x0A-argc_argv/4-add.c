#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
/**
 * addPositiveNumbers - function to add positive numbers
 * @argv: Argument array
 * @argc: Argument count
 * Return: Always 0 (Success)
 */
int addPositiveNumbers(int argc, char *argv[])
{
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		int num = atoi(argv[i]);

		if (num > 0)
		{
			result += num;
		}
	}
	printf("%d\n", result);
	return (0);
}
