#include "main.h"

/**
 * _puts - puts new line
 * @str: String
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

