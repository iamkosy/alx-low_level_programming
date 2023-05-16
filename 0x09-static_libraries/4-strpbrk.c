#include "main.h"

/**
 * _strpbrk - The entry point
 * @t: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *t, char *accept)
{
        int l;

        while (*t)
        {
                for (l = 0; accept[l]; l++)
                {
                if (*t == accept[l])
                return (t);
                }
        t++;
        }

return ('\0');
}
