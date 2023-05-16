#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @x: the start address of memory that should be filled
 * @y: the value we want
 * @z: the number of bytes to be changed
 *
 * Return: change the array with new value for z bytes
 */

char *_memset(char *x, char y, unsigned int z)
{
        int a = 0;

        for (; z > 0; a++)
        {
                x[a] = y;
                z--;
        }
        return (x);
}
