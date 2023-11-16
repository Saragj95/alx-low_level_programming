#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, k = 0;

	if (min > max)
	{
		return (NULL);
	}
	k = (max - min) + 1;
	array = malloc(k * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	array[0] = min;
	for (i = 1; i < k; i++)
	{
		array[i] = array[i - 1] + 1;
	}
	return (array);
}

