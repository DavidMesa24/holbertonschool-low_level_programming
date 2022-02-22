#include "main.h"

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

void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	if ( length_of_the_string % 2 == 0)
	{
		int medio = length_of_the_string / 2;
		while (medio < length_of_the_string)
		{
			_putchar(str[medio - 1]);
			medio ++;
		}
	}
	else 
	{
		int medio = (length_of_the_string - 1) / 2;
		while (medio < length_of_the_string)
		{
			_putchar(str[medio-1]);
		}
	}
	_putchar ('\n');
}
