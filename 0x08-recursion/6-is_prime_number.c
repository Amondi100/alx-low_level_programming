#include "main.h"

/**
 * is_divisible - searches for if a number is prime.
 * @a: the number to check.
 * @b: the divisor.
 * Return: 0 if the number is a prime, otherwise 1.
 */
int is_divisible(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		is_divisible(a, b + 1);

	return (1);
}

/**
 * is_prime_number - checks if an integer is a prime number or not.
 * @n: the number to check.
 * Return: 1 if the number is a prime number otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_divisible(n, 2));
}
