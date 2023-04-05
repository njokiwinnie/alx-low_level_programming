#include "main.h"
/**
 * _sqrt_recursion - function for square root
 * @n: number to square
 * Return: -1 if n is less than 0, return value otherwise -1
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	for (i = 1; i * i <= n; i++)
	{
		if (i * i == n)
			return (i);
	}
	return (-1);
}
