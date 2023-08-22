#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: input string.
 * Return: Length of the string.
 */

int _strlen(int *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
