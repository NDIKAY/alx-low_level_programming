#include "main.h"

/**
*_islower - Verfy if c is lower
*Return: 1 on success
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
