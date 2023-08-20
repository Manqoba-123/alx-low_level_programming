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
	if (size == 0)
		return (NULL);

	char *length = (char *)malloc(size * sizeof(char));

	if (length == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		length[i] = c;
	}
	return (length);
}
