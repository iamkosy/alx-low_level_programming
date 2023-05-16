#include <stdio.h>
#include "main.h"

/**
 * main - this prints all arguments it receives
 * @argc: represents number of arguments
 * @argv: represents array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
