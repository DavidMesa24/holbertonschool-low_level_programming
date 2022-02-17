#include "main.h"

/**
 * more_numbers - print numbers from 1 to 14 10 times
 * @void: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j == 15)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(j);
			}
		}
	}
}
