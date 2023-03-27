#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - print an array of integers
 * @a: array of integers
 * @n: number of integers to pull from the array
 *
 * Return: None
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
