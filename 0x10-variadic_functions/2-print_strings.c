#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *string;

	va_start(x, n);
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		char *current_x = va_arg(x, char *);

		if (current_x == NULL)
		{
			printf("(nil)");
		}
		if (current_x != NULL)
		{
			string = malloc((strlen(current_x) + 1) * sizeof(char));
			string = current_x;
			if (i != (n - 1) && separator != NULL && string != NULL)
			{
				printf("%s%s", string, separator);
			}
			if ((i == (n - 1) || separator == NULL) && string != NULL)
			{
				printf("%s", string);
			}
		}
	}
	va_end(x);
	printf("\n");
}
