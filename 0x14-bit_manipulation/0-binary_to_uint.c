#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		i++;
		b++;
	}
	b -= i;
	while (i > 0)
	{
		if ((*b != '0') && (*b != '1'))
		{
			return (0);
		}
		sum = sum + ((*b - '0') << (i - 1));
		b++;
		i--;
	}
	return (sum);
}	
