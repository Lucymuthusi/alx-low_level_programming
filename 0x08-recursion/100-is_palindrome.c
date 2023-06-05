#include <stdio.h>
#include <string.h>
#include "main.h"
int is_palindrome_helper(char *s, int start, int end);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - checks the characters recursively for palindrome
 * @s: string to check
 * @start: if start and end cross each other, it's a palindrome
 * @end: If characters at start and end positions don't match,
 * it's not a palindrome
 * Return: 1 if palindrome, 0 if its not
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
			if (s[start] != s[end])
				return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
