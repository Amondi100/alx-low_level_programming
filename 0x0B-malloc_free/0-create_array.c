#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and initializs it
 * with a specific char
 * @size: size of the array.
 * @c: specific char to be initialized
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
