#include "main.h"
/**
 * get_bit - get value of a bit at a given index 
 * @n: the number where to get value of bit
 * @index: the index of the bit to get
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int masked = 1UL << index;
	int bit_value = (n & masked) >> index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}

	return bit_value;
}

