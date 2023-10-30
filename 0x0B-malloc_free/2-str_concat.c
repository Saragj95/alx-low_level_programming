#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t i = 0, j = 0, length1, length2;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	length1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = " ";
	}
	length2 = strlen(s2);
	concat = malloc(((length1 + length2) * sizeof(char)) + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < (length1 + length2 + 1))
		{
			if (i < length1)
			{
				concat[i] = s1[i];
			}
			else
			{
				concat[i] = s2[j];
				j++;
			}
			i++;
		}
	return (concat);
	}
}
