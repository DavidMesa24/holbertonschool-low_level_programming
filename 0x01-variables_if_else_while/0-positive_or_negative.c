#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - return positive or negative
 *
 * Return: zero if n =0, positive if n>0 and negative if n<0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
	{
		printf("%d is positive\n", n);
	}
	else if(n==0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
