#include "main.h"

/**
 * _strlen - edfds
 * @s: dfd
 * Return: dd
 */

int _strlen(char *s)
{
	int length;
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

