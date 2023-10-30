#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
        char *s;
        char *j;
        char *k;

        s = str_concat("Betty", NULL);
        j = str_concat(NULL,"Betty");
        k = str_concat(NULL , NULL);

        if (s == NULL)
        {
                printf("failed\n");
                return (1);
        }
        printf("%s\n", s);
        printf("%s\n", j);
        printf("%s\n", k);

        free(s);
        return (0);
}
