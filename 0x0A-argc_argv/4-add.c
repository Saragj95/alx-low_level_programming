#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive - checks if a string represents a positive integer
 * @i: the string to check
 * Return: 1 if it's a positive integer, 0 otherwise
 */

int is_positive(const char *i)
{
	if (*i == '\0')
	{
		return (0);
	}
	while (*i)
	{
		if (*i < '0' || *i > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
