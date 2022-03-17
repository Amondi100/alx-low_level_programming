#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if parameter c represents an uppercase.
 * @c: int representing a character
 * return: always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
