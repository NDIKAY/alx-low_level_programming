#include <stdio.h>

/**
 * main - Enter point
 *@argc: parameter
 *@argv: Parameter
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	(void) argv[];

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);

}

