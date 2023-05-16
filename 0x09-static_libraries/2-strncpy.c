#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @a: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int a)
{
        int x;

        x = 0;
        while (x < a && src[x] != '\0')
        {
                dest[x] = src[x];
                x++;
        }
        while (x < a)
        {
                dest[x] = '\0';
                x++;
        }

        return (dest);
}
