#include "main.h"

/**
*_strcat - concatenates strings
*@dest: pointer parameter
*@src: poiner parameter
*Return: Pointer to the result str test
*/

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);

}
