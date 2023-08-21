#include <stdio.h>

/**
 * main - Finds and prints the largest
 * prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int pf, num;

	num = 612852475143;
	for (pf = 2; pf <= num; pf++)
	{
		if (num % pf == 0)
		{
			num = num / pf;
			pf--;
		}
	}
	printf("%1d\n", pf);
	return (0);
}
