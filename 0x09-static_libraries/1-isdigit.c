#include "main.h"

/**
*_isdigit -  verify fo digit
*@c: parameter
*Return: 1 if collect
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}