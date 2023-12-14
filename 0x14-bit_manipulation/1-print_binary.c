#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bits;
	int i;
	int leadingZeroes = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bits = sizeof(unsigned long int) * 8;
	for (i = bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
	{
		_putchar('1');
		leadingZeroes = 0;
	}
		else if (!leadingZeroes)
		{
			_putchar('0');
		}
	}
}
