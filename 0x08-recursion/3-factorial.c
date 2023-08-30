#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number input
 *
 * Return: If n > 0, the factorial of n.
 * If n < 0, -1.
 */

int factorial(int n)
{
	int res = 0;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	res *= factorial(n - 1);

	return (res);
}
