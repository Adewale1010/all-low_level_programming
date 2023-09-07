#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initialized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <=0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(ind width, int height)
{
	int **two_D;
	int height_i, width_i;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_D = malloc(sizeof(int) * height);

	if (two_D == NULL)
		return (NULL);

	for (height_i = 0; height_i < height; height_i++)
	{
		two_D[height_i] = malloc(sizeof(int) * width);

		if (two_D[height_i] == NULL)
		{
			for (; height_i; height_i--)
				free(two_D[height_i]);

			free(two_D);
			return (NULL);
		}
	}

	for (height_i = 0; height_i < height; height_i++)
	{
		for (width_i = 0; width_i < width; width_i++)
			two_D[height_i][width_i] = 0;
	}

	return (two_D);
}
