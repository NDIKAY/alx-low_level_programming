#include "main.h"

/**
*print_alphabet - Print alphabet in lowercase
*return: 0 on success
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; 'a' <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
