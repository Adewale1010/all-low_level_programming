#include <stdio.h>

/**
 * main - Print the alphabet in lower case
 *        except letter q and e.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	print('\n');

	return (0);
}
