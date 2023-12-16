#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_b - transform a number in binary notation
 * @n: number to transform
 *
 * Return: the binary number
 */

int *get_b(unsigned long int *n)
{
	int bits = 0, i;
	int leadingZeroes = 1;
	int *j;

	if (*n == 0)
	{
		j = malloc(sizeof(int));
		if (j == NULL)
		{
			return (NULL);
		}
		j[0] = 0;
		return (j);
	}
	bits = sizeof(unsigned long int) * 8;
	j = malloc(sizeof(int) * (bits + 1));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= bits - 1; i++)
	{
		if ((*n >> i) & 1)
		{
			j[i] = 1;
			leadingZeroes = 0;
		}
		else if (!leadingZeroes)
		{
			j[i] = 0;
		}
	}
	j[bits] = -1;
	return (j);
}

/**
 * set_bit - prog sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	int *k;

	k = get_b(n);
	if (k == NULL)
	{
		return (-1);
	}
	while (k[count] != -1)
	{
		count++;
	}
	if (index >= count)
	{
		free(k);
		return (-1);
	}
	k[index] = 1;
	return (*k);
}
