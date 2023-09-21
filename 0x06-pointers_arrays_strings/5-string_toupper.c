#include "main.h"

/**
*string_toupper - to change lower case in uppper case
*@str: Str to change
*Return: A pointer to the changed str
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	i++;
	}
	return (str);
}
