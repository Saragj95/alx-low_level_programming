#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits , i;
	unsigned int j = 0;
	unsigned long int result;

	result = n ^ m;
	bits = sizeof(unsigned long int) * 8;
	for (i = bits - 1; i >= 0; i--)
	{
		if ((result >> i) & 1)
		{
			j++;
		}
	}
	return (j);
}
