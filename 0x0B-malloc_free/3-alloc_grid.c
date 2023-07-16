#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of rectangle
 * @height: height of rectangle
 * Return: 0
 *
 */
int **alloc_grid(int width, int height)
{
	int **r;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	r = malloc(sizeof(int *) * height);
	if (r == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		r[x] = malloc(sizeof(int) * width);
		if (r[x] == NULL)
		{
			for (; x >= 0; x--)
				free(r[x]);
			free(r);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			r[x][y] = 0;
	}
	return (r);
}
