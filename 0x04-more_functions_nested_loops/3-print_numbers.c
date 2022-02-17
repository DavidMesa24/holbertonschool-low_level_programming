#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int numero;

	for (numero = '0'; numero <= '9'; numero++)
	{
		_putchar(numero);
	}
	_putchar('\n');
}
