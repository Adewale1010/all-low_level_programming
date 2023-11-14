#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: source string.
 * @accept: accepted string.
 *
 * Return: number of bytes in the init segment.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, a, t = 0;

	while (accept[i])
	{
		a = 0;

		while (s[a] != 32)
		{
			if (accept[i] == s[a])
			{
				t++;
			}

			a++;

		}

		i++;
	}

	return (t);
}
