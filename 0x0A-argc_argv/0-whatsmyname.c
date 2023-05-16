#include <stdio.h>
#include "main.h"

/**
 * main -this prints the name of the program
 * @argc:represents number of arguments
 * @argv:represents array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
