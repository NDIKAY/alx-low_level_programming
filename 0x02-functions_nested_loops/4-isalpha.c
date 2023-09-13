#include "main.h"

/**
*_isalpha - verify ifc is alphabet
*@c : Parameter to check
*return: 1 on success
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
