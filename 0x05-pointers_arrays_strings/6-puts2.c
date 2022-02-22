#include "main.h"
#include<stdbool.h>

void puts2(char *str)
{
	bool aux = true;

	int i = 0;

	while (*str != '\0')
	{
		if (aux)
		{
			_putchar(str[i]);
		}
		aux = !aux;
		i++;
	}
}
