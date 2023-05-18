#include <stdlib.h>
#include "main.h"

/**
 * *_memset - this fills the memory with a constant byte
 * @s: this is the memory area to be filled
 * @x: this is char to copy
 * @n: number of times to copy x
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = x;
	}

	return (s);
}

/**
 * *_calloc -  this allocates memory for an array
 * @nmemb: this is the number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
