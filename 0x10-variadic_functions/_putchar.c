#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @c: the character to print
 *
 * Return: 1 on success otherwise -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
