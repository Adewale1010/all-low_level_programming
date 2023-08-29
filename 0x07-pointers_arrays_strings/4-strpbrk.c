#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: source string.
 * @accept: accepted characters.
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, a;

	while (s[i])
	{
		a = 0;

		while (accept[a])
		{
			if (s[i] == accept[a])
			{
				s += i;
				return (s);
			}

			a++;
		}

		i++;
	}

	return ('\0');
}
