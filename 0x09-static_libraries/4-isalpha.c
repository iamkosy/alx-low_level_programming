#include "main.h"

/**
 * _isalpha - This checks for alphabetical characeter
 * @d: This is the character to be checked
 * Return: 1 if d is a letter, 0 otherwise
 */
int _isalpha(int d)
{
        return ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'));
}
