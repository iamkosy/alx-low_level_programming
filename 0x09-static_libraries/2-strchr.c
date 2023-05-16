#include "main.h"
#include <stddef.h>

/**
 * _strchr - The entry point
 * @t: input
 * @c: input
 * Reurn: 0 (Success)
 */
char *_strchr(char *t, char c)
{
        int a = 0;

        for (; t[a] >= '\0'; a++)
        {
                if (t[a] == c)
                        return (&t[a]);
        }
        return (0);
}
