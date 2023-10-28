#include <stdlib.h>
#include <stdio.h>
#include "main.h"

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
	else
	{
		val1 = atoi(argv[1]);
		val2 = atoi(argv[2]);
		mul = val1 * val2;
		printf("%d\n", mul);
	}
	return (0);
}
