#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: the number of arguments supplied to the program.
 * @argv: an array of pointers to the arguments.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
