#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function which sum all the parameter
 *@n: number of parameter passed to function
 *@...: a variable number of parameter to calculate the sum
 *Return: sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}


