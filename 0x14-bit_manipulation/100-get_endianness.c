#include "main.h"
/**
 * get_endianness - checks the endianess of the system
 * Return: 0 if big endian, 1 if little indian
 */

int get_endianness(void)
{
	unsigned int n = 1;

	char *endian_check = (char *)&n;

	if (*endian_check == 1)

	{
		return (1);
	}
	else
	{
		return (0);

	}
}


