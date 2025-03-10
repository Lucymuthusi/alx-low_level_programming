#include <stdio.h>
#include "main.h"

	/**
	 * Print_alphabet_x10 - a function that prints 10 times the alphabet
	 * in lowercase
	 * This function 2-print_alphabet_x10 prints the lowercase alphabet
	 * from 'a' to 'z' 10 times,each on a new line.
	 * Return - Success (0)
	 */
	void print_alphabet_x10(void)
	{
		char num, letter;

		for (num = 0; num <= 9; num++)
		{
			for (letter = 'a'; letter <= 'z'; letter++)
			{
				_putchar(letter);
			}
			_putchar('\n');
		}
	}
