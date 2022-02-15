#include "main.h"
/**
 * main - return _putchar
 *
 * Return: _putchar
 */
int main(void)
{
	int i = 0;
	char m[] = "_putchar";

	while (i <= 7)
	{
		_putchar(m[i]);
		i++;
	}
	
	_putchar('\n');
	return(0);
}
