#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - Allocate memory
 *@b: size of memory
 *Return: output;
 */


void *malloc_checked(unsigned int b)
{

	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);

}
