#include "main.h"
/**
 * flip_bits - function returning the numberof bits
 * needee to flip to get from n to m
 * @n: first number
 * @m: second number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int flip_count = 0;

	while (xor_result)
	{
		flip_count += xor_result & 1;
		xor_result >>= 1;
	}
	return (flip_count);
}

