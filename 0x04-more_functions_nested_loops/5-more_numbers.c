#include "main.h"

/**
*more_numbers - 0 to 14 ten times
*/

void more_numbers(void)
{
	int num1 = 1;
	int num2;

	while (num1 <= 10)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{

			if (num2 > 9)

				_putchar(num2 / 10 + '0');
			_putchar(num2 % 10 + '0');


		}
		num1++;
		_putchar('\n');
	}
}
