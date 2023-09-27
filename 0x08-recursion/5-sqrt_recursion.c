#include "main.h"

int _sqrt(int n, int i);

/**
 *_sqrt_recursion - Enter point
 *@n: Input
 *Return: The natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - Enter point
 *@n: Input
 *@i: input
 *Return: The natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

