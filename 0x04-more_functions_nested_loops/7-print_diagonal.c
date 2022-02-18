#include "main.h"

/**
 *print_diagonal - pues ajá mor, el nombre lo dice perris
 *@n: el numero de lineas
 */
void print_diagonal(int n)
{
	int i;

	if (n > 1)
	{

		for (i = 0; i < n; i++)
		{
			int espacios = 0;

			while (espacios < i)
			{
				_putchar (' ');
				espacios++;
			}
			_putchar (92);
			_putchar('\n');
		}
	}
	else if (n == 1)
	{
		_putchar (92);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
