#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the all the parameters
 * @n: number of arguments
 * @...: variable number of parameters
 * Return: 0 if n is zero otherwise sum result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
