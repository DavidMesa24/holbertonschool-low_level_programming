#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - ........
 *
 * @s: .....
 * Return: int
 */

int _strlen_recursion(char *s)
{

	if (!s || !*s)
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}
