#include "main.h"
/**
 * is_prime_number - prime numbers
 * @n: interger
 * Return: returns 1 if prime otherwise 0
 */
int is_prime_number(int n)
{
	int i ;

	if (n < 2)
		return (0);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
