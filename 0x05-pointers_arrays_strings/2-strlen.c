#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: input string.
 * Return: Length of the string.
 */

void _strlen(int *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
