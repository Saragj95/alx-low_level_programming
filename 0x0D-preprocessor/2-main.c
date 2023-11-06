#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{
	size_t j;
	char c[100];

	strncpy(c, __FILE__, sizeof(c) - 1); 
	c[sizeof(c) - 1] = '\0';
	for (j = 0; j < strlen(__FILE__); j++)
	{
		putchar(c[j]);
	}
	putchar('\n');
	return (0);
}
