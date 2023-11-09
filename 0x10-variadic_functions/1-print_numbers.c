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
	va_list x;
	unsigned int i;

	va_start(x, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		int current_x = va_arg(x, unsigned int);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%d%s", current_x, separator);
		}
		if (i == (n - 1) || separator == NULL)
		{
			printf("%d", current_x);
		}
	}
	va_end(x);
	printf("\n");
}
