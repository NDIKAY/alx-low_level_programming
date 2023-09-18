#include "main.h"

/**
*print_rev - Print reverse string
*@s: Parameter
*/


void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; i != '\0'; i++)
		count++;


	for (i = count - 1; s[i] >= 0; i--)
		_putchar(s[i]);

}


