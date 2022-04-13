#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each of an array
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 * @array: the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
