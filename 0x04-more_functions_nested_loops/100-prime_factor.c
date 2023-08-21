#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest
 * prim factor of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long prime, maxfac;
	long number = 612852475143;
	double square = sqrt(number);

	for (prime = 1; prime <= square; prime++)
	{
		if (number % prime == 0)
		{
			maxfac = number / prime;
		}
	}

	printf("%1d\n", maxfac);

	return (0);
}
