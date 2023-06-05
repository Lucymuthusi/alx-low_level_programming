#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int i, j;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}
	return (1);
}
