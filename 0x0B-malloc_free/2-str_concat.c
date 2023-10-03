#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenation of two str
 *@s1: str 1
 *@s2 :str 2
 *Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int i;
	int j = 0;
	char *outputStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		s1len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2len++;
	j = s1len + s2len;

	outputStr = malloc(sizeof(char) * j + 1);

	if (outputStr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		outputStr[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		outputStr[s1len + i] = s2[i];
	return (outputStr);
}

