#include "main.h"

/**
 * _isdigit - define if c is digit or not
 * @c: the string to be evaluated
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

