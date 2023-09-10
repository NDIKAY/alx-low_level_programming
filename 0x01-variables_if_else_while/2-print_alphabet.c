#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/**
* main - Entry point
** Return:0 on sucess
*/

int main(void)

{
	int lowerCase = 'x';

	while (lowerCase <= 'z')

	{
	putchar(lowerCase);
	lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
