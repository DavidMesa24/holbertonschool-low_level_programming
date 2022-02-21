#include "main.h"

/**
 * swap_int - swap to integers
 * @a: integer a
 * @b: integer b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aa;

	aa = *a;
	*a = *b;
	*b = aa;
}
