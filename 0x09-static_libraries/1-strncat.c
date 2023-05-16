#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most a bytes from src
 * @dest: input value
 * @src: input value
 * @a: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int a)
{

        int x;
        int y;

        x = 0;

        while (dest[x] != '\0')
        {
                x++;
	}
        y = 0;
        while (y < a && src[y] != '\0')
        {
        dest[x] = src[y];
        x++;
        y++;
        }
        dest[x] = '\0';
        return (dest);
}
