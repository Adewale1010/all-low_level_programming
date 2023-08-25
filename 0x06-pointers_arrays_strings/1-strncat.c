#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: The pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, count = 0;

	while (dest[i++])
		count++;

	for (i = 0; src[i] && i < n; i++)
		dest[count++] = src[i];

	return (dest);
}
