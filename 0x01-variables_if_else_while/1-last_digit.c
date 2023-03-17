#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it i greater than 5,less than 6,or 0.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time() - RAND_MAX/2;

	if ((n%10)>5)
	{
	   printf("last digit of %dis %dand is greater then 5\n",n,n%10);
	}
	else if ((n%10)<&& (n%10)!=0)
	{
	     printf("lat digit of %d is %d and is less than 6 and not 0\n",n,n%10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n",n,n%10);
	}
	return (0);
	}
	

