#include "main.h"
#include <unistd.h>

/**
 * _putcchar -> write the char c stdout
 * @c: input
 * Return: success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
