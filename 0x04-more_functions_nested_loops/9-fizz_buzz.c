#include <stdio.h>

/**
 * fizz - fizz buzz
 * Return: Always 0
 */

int fizz(void)
{
	int i;
	
	i=1;
	printf("%d", n);

	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
