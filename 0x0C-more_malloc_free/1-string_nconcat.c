#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, len = 0, K = 0;
	char *string;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len = strlen(s1) + n;
	string = malloc(sizeof(char) * len);
	if (string == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < strlen(s1); j++)
	{
		string[j] = s1[j];
	}
	for (i = strlen(s1); i < len; i++)
	{
		string[i] = s2[K];
		K++;
	}
	return (string);
}
