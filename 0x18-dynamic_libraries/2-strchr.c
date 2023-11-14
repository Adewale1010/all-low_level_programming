#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: source.
 * @c: character to find.
 *
 * Return: The string from character found
 */

char *_strchr(char *s, char c)
{
	int i = 0, a;

	while (s[i])
	{
		i++;
	}

	for (a = 0; a <= i; a++)
	{
		if (c == s[a])
		{
			s += a;
			return (s);
		}
	}

	return ('\0');
}
