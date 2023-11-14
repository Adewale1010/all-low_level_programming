#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search
 * @needle: The string to find
 *
 * Return: Char value.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, a = 0;

	while (haystack[i])
	{
		while (needle[a])
		{
			if (haystack[i + a] != needle[a])
			{
				break;
			}

			a++;
		}

		if (needle[a] == '\0')
		{
			return (haystack + i);
		}

		i++;
	}

	return ('\0');
}
