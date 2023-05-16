#include "main.h"

/**
 * _strcmp - comparison of string values
 * @x1: input value
 * @x2: input value
 *
 * Return: x1[i] - x2[i]
 */
int _strcmp(char *x1, char *x2)
{
        int i;

        i = 0;
        while (x1[i] != '\0' && x2[i] != '\0')
        {
                if (x1[i] != x2[i])
                {
                        return (x1[i] - x2[i]);
                }
        i++;
        }
        return (0);
}
