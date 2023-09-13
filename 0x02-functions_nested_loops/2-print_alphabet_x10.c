#include "main.h"

/**
*print_alphabet_x10 - print alphabet 10 times
*return: 0 on success
*/

void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a <= 9)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
	}
	_putchar('\n');
	a++;
}
