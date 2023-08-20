#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Create an array of characters and initialize
 * @size: Unsigned int
 * @c: Character
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *length;

	length = malloc(size * sizeof(char));

	if (size == 0 || length == NULL)
	{
		return (NULL);
	}
	for (size == 0; i < size; i++)
	{
		length[i] = c;
	}
	return (length);
}
