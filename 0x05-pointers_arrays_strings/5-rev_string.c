#include "main.h"

/**
 * _strlen - length
 * @s: str
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * rev_string - reverse string
 * @s: str
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char x;

	while (i < j)
	{
		x = s[i];
		s[i] = s[j];
		s[j] = x;
		i++;
		j--;
	}
}
