#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: If it worked - 1, Otherwise - -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-10);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
