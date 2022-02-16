#include "main.h"

/**
 * largest_number - return the largest of 3 numbers
 * @a: first number
 * @b: second number
 * @c: third number
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int mayor;
	if (a >= b && b >= c)
	{
		mayor = a;
	}
	else if (b >= a && b >= c)
	{
		mayor = b;
	}
	else 
	{
		mayor = c;
	}

	return (mayor);
}

