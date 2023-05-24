#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print the name using pointer to function
 * @name: this is the string to add
 * @x: this is the pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*x)(char *))
{
	if (name == NULL || x == NULL)
		return;

	x(name);
}
