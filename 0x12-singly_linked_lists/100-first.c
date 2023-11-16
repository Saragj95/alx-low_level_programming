#include <stdio.h>
#include "lists.h"

/**
 * prints - prints a sentence before the main function is executed
 */

void prints(void) __attribute__((constructor));
void prints(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
