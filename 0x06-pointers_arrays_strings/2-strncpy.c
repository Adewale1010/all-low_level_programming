#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: destination.
 * @src: source.
 * @n: amount of byte from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_count = 0;

	while (src[i++])
		src_count++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_count; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
