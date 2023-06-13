#include "main.h"

/**
 * _puts_recursion - prints string using puts
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *temp = s;

	if (*temp == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*temp);
	_puts_recursion(temp + 1);
}
