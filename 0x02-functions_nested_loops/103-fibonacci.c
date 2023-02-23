#include <stdio.h>
#include <stdlib.h>
#include "main.h"
void fibonacci(void)
{
	int a = 1;  /* First Fibonacci number */
    int b = 2;  /* Second Fibonacci number */

    /* Print the first two Fibonacci numbers */
    putchar(a + '0');
    putchar(',');
    putchar(' ');
    putchar(b + '0');
    putchar(',');
    putchar(' ');

    /* Loop to calculate and print the next 96 Fibonacci numbers */
    for (int i = 2; i < 98; i++)
    {
        /* Calculate the next Fibonacci number */
        int c = a + b;
        /* Update the values of a and b for the next iteration */
        a = b;
        b = c;

        /* Print the current Fibonacci number */
        while (c > 0)
        {
            putchar((c % 10) + '0');
            c /= 10;
        }
        putchar(',');
        putchar(' ');
    }

    /* Print a new line character at the end */
    putchar('\n');

    return (0);
}
