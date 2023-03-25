#include "main.h"
/**
 * print_line - prints line n times
 * n@: number of times for the _ to be printed
 */

void print_line(int n)
{
	int i;

	for (int i = 0; i < n; i++)
	{
		if (n <= 0)
			putchar('\n');
	}
	putchar('_');
}
