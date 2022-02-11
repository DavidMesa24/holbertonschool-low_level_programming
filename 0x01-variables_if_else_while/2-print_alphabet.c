#include <stdio.h>
/**
 * main - return alphabeth lowecase
 *
 * Return: zero always
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar (l);
		l++;
	}
	putchar ('\n');
	return (0);
}

