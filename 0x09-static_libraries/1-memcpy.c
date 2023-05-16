#include "main.h"

/**
 *_memcpy -will be a function that copies memory area
 *@dest: where the memory is stored
 *@src: where the memory is copied
 *@x: will be number of bytes
 *
 *Return: copied memory with x bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int x)
{
        int a = 0;
        int b = x;

        for (; a < b; a++)
        {
                dest[a] = src[a];
                a--;
        }
        return (dest);

}
