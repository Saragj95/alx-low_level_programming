#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	if (separator == NULL)
	{
		separator = " ";
	}
	for (i = 0; i < n; i++)
	{
		int current_arg = va_arg(arg, unsigned int);
		if (i != (n - 1))
		{
			printf("%d%c ", current_arg, *separator);
		}
		if (i == (n - 1))
		{
			printf("%d", current_arg);
		}
	}
	va_end(arg);
	printf("\n");	
}
