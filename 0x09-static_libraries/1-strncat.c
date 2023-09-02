#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, count = 0;

	while (dest[i++])
		count++;

	for (i = 0; src[i] && i < n; i++)
		dest[count++] = src[i];

	return (dest);
}
