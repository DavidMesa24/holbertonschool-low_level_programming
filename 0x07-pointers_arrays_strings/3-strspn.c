#include "main.h"
/**
 * _strspn - ...
 * @s: ....
 * @accept: ....
 *
 * Return: ...
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] != s[j])
			{
				count++;
			}
			else
			{
				return (count);
			}
		}
	}
	return (count);
}

