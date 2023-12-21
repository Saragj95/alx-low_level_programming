#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - This prog sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 *
 * Return: 1 if success, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int result = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	if (*n == 0)
	{
		*n = 0;
		return (1);
	}
	result = 1 << index;
	*n = *n ^ result;
	return (1);
}
