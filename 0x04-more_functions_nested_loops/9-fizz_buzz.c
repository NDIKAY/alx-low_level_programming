#include <stdio.h>

/**
*main - main function
*Return: 0
*/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("%s", "fizzbuzz");
		else if (a % 3 == 0)
			printf("%s", "fizz");
		else if (a % 5 == 0)
			printf("%s", "buzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
