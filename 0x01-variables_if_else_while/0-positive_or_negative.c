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
	/* your code goes there */
	if(n>0)
	{
		printf("is positive\n");
	}
	else if(n==0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative \n");
	}

	return (0);
}
