#include "main.h"

/**
 * print_square - Prints a square with the character #
 * @size: The size of the square.
 */

void print_square(int size);
{
	int hght, widt;

	if (size > 0)
	{
		for (hght = 0; hght < size; hght++)
		{
			for (widt = 0; widt < size; widt++)
				_putchar('#');

			if (hght == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
