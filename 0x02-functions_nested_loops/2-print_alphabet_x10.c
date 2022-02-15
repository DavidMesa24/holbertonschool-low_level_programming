#include "main.h"
/**print_alphabet_x10 - pues lo mprime x10 que mas jeje salu2
 *
 * Return : void
 */
void print_alphabet_x10(void)
{
	char c; 
	int i;

	for (i = 0; i<10; i++)
	{	
		for (c = 'a'; c<= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
