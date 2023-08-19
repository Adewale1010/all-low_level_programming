#include "main.h"

/**
 * isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase and 0 if otherwise.
 */

int isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);

}
