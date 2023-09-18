#include "main.h"

/**
*print_rev - Print reverse string
*@s: Parameter
*/


void print_rev(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}


