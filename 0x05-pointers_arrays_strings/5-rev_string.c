#include "main.h"

/**
*rev_string - Function of reverse string
*@s: parameter
*/
void rev_string(char *s)
{
	int ln = 0;
	int index = 0;
	char tmp;

	while (s[index++])
	ln++;

	for (index = ln - 1; index >= ln / 2; index--)
	{
	tmp = s[index];
	s[index] = s[ln - index - 1];
	s[ln - index - 1] = tmp;
	}
}
