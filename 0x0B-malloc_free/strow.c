#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	int wordCount = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			while (str[i] == ' ')
			{
				i++;
			}
		}
		if (str[i] != '\0')
		{
			wordCount++;
		}
	}
	if (wordCount == 0)
	{
		return (NULL);
	}
	char **words = (char **)malloc((wordCount + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	int wordIndex = 0;
	char *token = strtok(str, " ");
	while (token != NULL)
	{
		words[wordIndex] = (char *)malloc((strlen(token) + 1) * sizeof(char));
		if (words[wordIndex] == NULL)
		{
			for (int i = 0; i < wordIndex; i++) 
			{
				free(words[i]);
			}
			free(words);
			return (NULL);
		}
		strcpy(words[wordIndex], token);
		wordIndex++;
		token = strtok(NULL, " ");
	}
	words[wordIndex] = NULL;
	return (words);
}
