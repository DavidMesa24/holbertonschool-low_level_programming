#include "main.h"
/**
 * _str len - length
 * @s: char
 * Return: void
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
 * puts_half
 * @str - str
 * Return: void
 */
void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);

	if (length_of_the_string % 2 == 0)
	{
		int medio = length_of_the_string / 2;

		while (medio < length_of_the_string)
		{
			_putchar(str[medio]);
			medio++;
		}
	}
	else
	{
		int medio = (length_of_the_string - 1) / 2;

		while (medio <	length_of_the_string - 1)
		{
			_putchar(str[medio + 1]);
			medio++;
		}
	}
	_putchar ('\n');
}
