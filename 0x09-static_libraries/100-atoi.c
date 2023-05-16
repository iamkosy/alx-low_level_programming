#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @t: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *t)
{

        int sign = 1, a = 0;
        unsigned int res = 0;

        while (!(t[a] <= '9' && t[a] >= '0') && t[a] != '\0')
        {
                if (t[a] == '-')
                        sign *= -1;
                a++;
        }
        while (t[a] <= '9' && (t[a] >= '0' && t[a] != '\0'))
        {
                res = (res * 10) + (t[a] - '0');
                a++;
        }
        res *= sign;
        return (res);
}
