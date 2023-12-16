#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_binary - transform a number in binary notation
 * @n: number to transform
 *
 * Return: the binary number
 */

int *get_binary(unsigned long int n)
{
	int bits = 0, i;
	int leadingZeroes = 1;
	int *j;

	if (n == 0)
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
	for (i = 0; i <= bits - 1;i++)
	{
		if ((n >> i) & 1)
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
 * get_bit - prog returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0, m;
	int *k;

	k = get_binary(n);
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
	m = k[index];
	free(k);
	return (m);
}
