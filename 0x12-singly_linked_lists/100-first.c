#include <stdio.h>
#include "lists.h"

/**
 * prints - prints a sentence
 * before the main function
 */

void prints(void) __attribute__((constructor));
void prints(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
