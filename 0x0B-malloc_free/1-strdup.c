#include "main.h"
#include <stdlib.h>
/**
 *_strdup - copy str to newly allocated function
 *@str: string to copy
 *Return: pointer to newly array
 */

char *_strdup(char *str)

{
	int i;
	char *copy;
	int count = 0;

	if (str == 0
			)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == 0)

		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

		copy[i] = str[i];

	return (copy);
}

