#include <stdio.h>
/**
*main - Addition of multiples of 5 and 3 below 1024
*Return: 0 on succcess
*/

int main(void)

{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)

			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
