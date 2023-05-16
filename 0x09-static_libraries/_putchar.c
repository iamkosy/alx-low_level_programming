#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 * @c: print the character
 *
 * Return: success 1.
 * On error, -1 should be returned, and errno set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

