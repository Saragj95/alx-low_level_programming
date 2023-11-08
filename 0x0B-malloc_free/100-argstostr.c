#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int index = 0, i, total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			total_len++;
			arg++;
		}
		total_len++;
	}
	char *result = (char *)malloc(total_len + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			result[index] = *arg;
			arg++;
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}
