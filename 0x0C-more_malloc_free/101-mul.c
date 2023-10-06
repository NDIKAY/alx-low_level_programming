#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *is_digit - enter point
 *@c: parameter
 *Return: c as output
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 *print_error_and_exit - enter point
 */

void print_error_and_exit(void)

{
	printf("Error\n");
	exit(98);
}

/**
 *multip - Enter point
 *@num1: Parameter
 *@num2: Parameter
 */

void multip(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;

	while (num1[len1] && is_digit(num1[len1]))
		len1++;
	while (num2[len2] && is_digit(num2[len2]))

		len2++;

	if (len1 == 0 || len2 == 0)
		print_error_and_exit();

	int result_len = len1 + len2;

	int *result = calloc(result_len, sizeof(int));

	if (result == NULL)
		print_error_and_exit();

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];

			result[i + j] += sum / 10;
			result[i + j] + 1] = sum % 10;
		}
	}
	int start = 0;

	while (start < result_len - 1 && result[start] == 0)
		start++;
	for (int i = start; i < result_len; i++)
		printf("%d", result[i]);

	printf("\n");

	free(result);
}

/**
*main - enter point
*@argc: argument
*@argv: argument
*Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_and_exit();

	char *num1 = argv[1];
	char *num2 = argv[2];


	while (*num1)
	{
		if (!is_digit(*num1))
			print_error_and_exit();
		num1++;
	}
	while (*num2)
	{
		if (!is_digit(*num2))
			print_error_and_exit();
		num2++;
	}
	multip(argv[1], argv[2]);

	return (0);

}
