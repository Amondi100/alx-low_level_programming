#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - performs addition of 2 numbers
 * @a: sumd1
 * @b: sumd2
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs subtractio
 * @a: subn 1
 * @b: subn 2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: multp 1
 * @b: multp 2
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - performs division
 * @a: divisor
 * @b: dividend
 * Return: result
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - performs modulo
 * @a: elm 1
 * @b: elm 2
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
