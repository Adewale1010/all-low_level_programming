#include <stdio.h>

/**
 * main - Print the alphabet in lower case and
 *        then in upper case.
 *
 * Return: Always 0
 */
int main(void)
{
	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
