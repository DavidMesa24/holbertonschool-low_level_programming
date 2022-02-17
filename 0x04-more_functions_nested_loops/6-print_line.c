#include "main.h"

/**
 * print_line - print a line
 * @n: number of _ to be printed
 */

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
