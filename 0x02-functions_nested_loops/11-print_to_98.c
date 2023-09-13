#include "main.h"
#include <stdio.h>

/**
*print_to_98 - Print to 98
*@n: Parameter
*/

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	else if (n > 0)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
		}
		printf("\n");
	}
}
