#include "main.h"

/**
 * _strspn - The entry point
 * @t: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *t, char *accept)
{
        unsigned int m = 0;
        int s;

        while (*t)
        {
                for (s = 0; accept[s]; s++)
                {
                        if (*t == accept[s])
                        {
                                m++;
                                break;
                        }
                        else if (accept[s + 1] == '\0')
                                return (m);
                }
                t++;
        }
        return (m);
}
