#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* main - Entry point
** Return:0 on sucess
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastun = n % 10;
	if (lastNum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	}
	else if (lastnum == 0)
	{
		printf("Last digit of %d is %d and is greater than 0\n", n, lastNum);
	}
	else ("LastNum < 6 && lastNum!= 0)
	{
		Printf("Last digit of %d is %d and is less than 6 and 0\n", n, lastNum);
	}
	
	return (0);
}
