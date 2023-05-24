#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - this returns the sum of two numbers.
* @x: The first number.
* @y: The second number.
*
* Return: The sum of x and y.
*/
int op_add(int x, int y)
{
	return (x + y);
}
/**
* op_sub - Returns the difference of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - Returns the product of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The product of a and b.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Returns the division of two numbers.
* @a: The first number.
* @b: The second number.
*
* Return: The quotient of a and b.
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
* op_mod - this returns the remainder of the division of two numbers.
* @x: The first number.
* @y: The second number.
*
* Return: The remainder of the division of x by y.
*/
int op_mod(int x, int y)
{
	return (x % y);
}
