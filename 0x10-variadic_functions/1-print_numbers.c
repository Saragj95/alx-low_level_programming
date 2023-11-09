#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

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
			printf("%d%c ", current_x, *separator);
		}
		if (i == (n - 1) || separator == NULL)
		{
			printf("%d", current_x);
		}
	}
	va_end(x);
	printf("\n");	
}
