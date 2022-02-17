#include "main.h"

/**
 *print_diagonal - pues ajá mor, el nombre lo dice perris
 *@n: el numero de lineas
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			_putchar(98);
		}
		else
		{
			int espacios = n - 1;

			while (espacios > 0)
			{
				_putchar(' ');
				espacios--;
			}
			_putchar(98);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
