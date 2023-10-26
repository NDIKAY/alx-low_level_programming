#include "main.h"

/**
 *set_bit - sets the value of a bit to 1 at given index
 *@n: parameter which point to a number
 *@index: the index of the bit to set
 *Return: 1 if if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | mask;

	return (1);
}
