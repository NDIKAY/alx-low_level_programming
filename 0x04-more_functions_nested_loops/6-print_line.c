#include "main.h"

/**
*print_line - print underscore
*@n: function parameter
*/

void print_line(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}



