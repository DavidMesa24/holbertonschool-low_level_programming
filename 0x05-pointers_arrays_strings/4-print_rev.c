#include "main.h"
/**
 * print_rev - reverse
 * @s: string
 * Return: null
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		s++;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

