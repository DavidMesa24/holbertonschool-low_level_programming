#include "main.h"
#include<stdbool.h>
/**
 * _strlen - return length
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
 * puts2 - print 2
 * @str: str
 * Return: void
 */

void puts2(char *str)
{
	bool aux = true;

	int i = 0;
	int j = _strlen(str);

	while (i < j)
	{
		if (aux)
		{
			_putchar(str[i]);
		}
		aux = !aux;
		i++;
	}
	_putchar('\n');
}
