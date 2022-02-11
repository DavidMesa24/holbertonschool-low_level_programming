#include <stdio.h>
/**
 * main - alphabeth lower case and upper case
 *
 * Return: zero always
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar ('\n');
	return (0);
}

