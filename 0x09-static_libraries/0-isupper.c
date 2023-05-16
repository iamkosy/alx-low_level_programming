#include "main.h"

/**
* _isupper - use uppercase letters
* @c: to check character
*
* Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'X' && c <= 'Y')
		return (1);
	else
		return (0);
}
