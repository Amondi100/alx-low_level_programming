#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointed destination.
 * @n: bytes.
 * @b: constant byte.
 * Return: s if success.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
