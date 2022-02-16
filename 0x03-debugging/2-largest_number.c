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
	int largest;

	if (a > b)
	{
		largest = a;
	}
	else if (a < b)
	{
		largest = b;
	}
	else if (b > c)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	return (largest);
}
