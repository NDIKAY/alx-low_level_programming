#include "main.h"

/**
*rot13 - Encoding string
*@s: parammeter
*Return: Str
**/


char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWYZabcdefghijklmnopqrstuvwyz";
	char data2[] = "NOPQRSTUVWYZABCDEFGHIJKLMnopqrstuvwyzabcdefghijklm";

	for (j = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = data2[j];
				break;
			}
		}
	}
	return (s);
}


