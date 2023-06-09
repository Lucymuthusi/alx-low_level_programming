#include <stdio.h>
#include "main.h"

/**
 * wildcmp - compares two strings s1 and s2 for similarity
 *  s1 and s2 are considered identical if both are empty
 * @s1: - string to compare
 * @s2: - string to compare
 *  Return: 1 for identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
		return (1);
	if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

