#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase,
 *                      followed by a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count;
	char letter;

	count = 0;
	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
