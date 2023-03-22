#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result <= 9)
			{
				if (j != 0)
					putchar(' ');
				putchar(result + '0');
			}
			else
			{
				putchar(result / 10 + '0');
				putchar(result % 10 + '0');
			}
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
