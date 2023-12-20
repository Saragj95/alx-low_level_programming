#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - prog sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	result = (1 << index);
	*n = *n | result;
	return (1);
}
