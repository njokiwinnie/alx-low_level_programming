#include "main.h"
/**
 * factorial - factorial of a number
 * @n: number
 * Return: -1 if n is less than zero otherwise the value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
