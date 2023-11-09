#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

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
