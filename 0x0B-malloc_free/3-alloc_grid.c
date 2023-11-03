#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width == 0 || width < 0 || height == 0 || height < 0)
	{
		return (NULL);
	}
	matrix = malloc(width * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		matrix[i] = malloc(height * sizeof(int));
		if (matrix[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			matrix[i][j] = 0 + 0;
		}
	}
	return (matrix);
}
