#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t j = 0;
	size_t i;
	char c;

	fp = fopen(filename,"r");
	if (fp == NULL)
	{
		return (0);
	}
	for (i = 0; i < letters; i++)
	{
		c = getc(fp);
		if (c == EOF)
		{
			break;
		}
		putchar(c);
		j++;
	}
	fclose(fp);
	return (i);
}
