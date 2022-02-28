#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - ....
 * @s: .....
 * @accept: ......
 * Return: ......
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; j != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
