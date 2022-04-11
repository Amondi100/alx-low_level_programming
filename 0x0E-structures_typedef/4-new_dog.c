#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of the string.
 * @str: the string to be measured.
 *
 * Return: length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string pointed to by the src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: the buffer storing the str copy
 * @src: the source string.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog.
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogi;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogi = malloc(sizeof(dog_t));
	if (dogi == NULL)
		return (NULL);

	dogi->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dogi->name == NULL)
	{
		free(dogi);
		return (NULL);
	}

	dogi->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dogi->owner == NULL)
	{
		free(dogi->name);
		free(dogi);
		return (NULL);
	}

	dogi->name = _strcpy(dogi->name, name);
	dogi->age = age;
	dogi->owner = _strcpy(dogi->owner, owner);

	return (dogi);
}
