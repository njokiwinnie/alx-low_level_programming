#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print numbers
 * @separator: string arg
 * @n: nunber of intergers passed
 * @...: variable arguments
 * Return: 0 success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
