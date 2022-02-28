#include "main.h"
#include <stdio.h>

/**
 * _strchr - ...
 * @s: ..
 * @c: ....
 *
 * Return: ....
 */



char *_strchr(char *s, char c)
{
	int a = *s;

	while (1)
	{
		a = *s++;

		if (a == c)
		{
			return (s-1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
