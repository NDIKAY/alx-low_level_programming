#include "main.h"
#include <stdio.h>

/**
*Print_times_table - Print tables
*@n: parameter
*/

void print_times_table(int n)
{
	int i, j, result;

	if  (n >= 0 && n <= 15)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(48);
			for (j = 0; j < n; j++)
			{
				_putchar(',');
				_putchar(' ');
				result = i * j;
				if (result <= 9)
					_putchar(' ');
				if (result <= 99)
				      	_putchar(' ');
				if (result >= 100)
				{
					_putchar((result / 100) + 48);
					_putchar((result / 10) % 10 + 48);
				} else if (result <= 99 && result >= 10)
					_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			_putchar('\n');
		}

	}
}

