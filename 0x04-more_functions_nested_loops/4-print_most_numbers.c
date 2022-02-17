#include "main.h"

/**
 * print_most_numbers - print numbers but not 2 and 4
 * @void
 *
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
		{
		}
		else
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}


