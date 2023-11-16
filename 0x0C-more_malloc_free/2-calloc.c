#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **barray;
	int *sarray;
	long unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	barray = malloc(sizeof(void *) * nmemb);
	if (barray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		sarray = malloc(size);
		if (sarray == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(barray[j]);
			}
			free(barray);
			return (NULL);
		}
		barray[i] = sarray;
		for (j = 0; j < (sizeof(int) * size); j++)
		{
			((int *)barray[i])[j] = 0;
		}
	}
	return (barray);
}
