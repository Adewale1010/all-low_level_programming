#include "main.h"

/**
 * strlen - Returns the length of a string.
 * @s: input string.
 * Return: Length of the string.
 */

void strlen(int *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
