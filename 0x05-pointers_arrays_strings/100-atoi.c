#include<stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    /* check for negative sign */
    if (*s == '-')
    {
        sign = -1;
        s++;
    }

    /* check for positive sign */
    else if (*s == '+')
    {
        s++;
    }

    /* iterate over string */
    while (*s)
    {
        /* check for non-digit characters */
        if (*s < '0' || *s > '9')
        {
            break;
        }

        /* update result */
        result = (result * 10) + (*s - '0');

        /* move to next character */
        s++;
    }

    /* apply sign and return result */
    return sign * result;
}
