#include "main.h"

/**
 *clear_bit - set a value of BIT TO ZERO;
 *@n: pointer to the number
 *@index: the index of a bit to clear
 *Return: 1 if successed, -1 if error is there
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & mask;

	return (1);
}

