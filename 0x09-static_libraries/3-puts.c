#include "main.h"

/**
 * _puts - This prints a string as well as a new line to stdout
 * @str: This is the string to be printed
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str++);
        }
                _putchar('\n');
}
