#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints aall natural numbers from n to 98
 * @n: starting number
 * @i: intitialized
 */
void print_to_98(int n, int i)
{
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(",");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
