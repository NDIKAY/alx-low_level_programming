#include "main.h"
/**
 *binary_to_uint - to convert binary to intengers
 *@b: A string containing the binary
 *Return: converted decimals
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	char current_str;

	if (b == NULL)
		return (0);

	while ((current_str = *b++) != '\0')
	{
		if (current_str == '0' || current_str == '1')
		{
			res = (res << 1) + (current_str - '0');
		}
		else
		{
			return (0);
		}
	}
	return (res);
}

