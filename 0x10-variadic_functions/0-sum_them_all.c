#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variables to calculate the sum of.
 *
 * Return: 0 if n == 0;
 * Return: Sum if success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		int current_arg = va_arg(arg, unsigned int);

		sum = sum + current_arg;
	}
	va_end(arg);
	return (sum);
}
