#include"main.h"

/**
*print_numbers - list of 9 digit
*Return: 1 if collect
*/

void print_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
