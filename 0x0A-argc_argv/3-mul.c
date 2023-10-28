#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * isInteger - Check if the input string represents an integer.
 * @str: The string to check.
 *
 * Return: 1 if the string is a valid integer, 0 otherwise.
 */

int isInteger(const char *str)
{
	int num = atoi(str);

	return (num != 0 || (num == 0 && str[0] == '0'));
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int mul, val1, val2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	if (isInteger(argv[1]) && isInteger(argv[2]))
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		mul = val1 * val2;
		printf("%d\n", mul);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
