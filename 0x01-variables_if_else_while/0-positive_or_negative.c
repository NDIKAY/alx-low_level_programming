#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a random number is positive or negative or zero
 * return - 0 on sucess 
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(n, "positive");
	}
	else if (n < 0)
	{
		printf(n, "negative");
	}
	else 
	{
		printf(n, "zero");
	}
	return (0);
}
