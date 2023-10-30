#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *copy;
	size_t i = 0;
	size_t length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	copy = malloc((length * sizeof(char)) + 1);
	if (copy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < length)
		{
			copy[i] = str[i];
			i++;
		}
	}
	return (copy);
}
