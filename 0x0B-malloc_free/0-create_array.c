#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		buffer = malloc(size * sizeof(char));
		while (i < size)
		{
			buffer[i] = c;
			i++;
		}
	}
	return (buffer);
}
